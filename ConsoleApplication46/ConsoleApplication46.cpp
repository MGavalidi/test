#include <iostream>
#include <string>
#include <Windows.h>//бибилиотека для контороля кодировки
#include <fstream>//библиотека потоков
using namespace std;

int main()
{
    //setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);//кодировка записи
    SetConsoleOutputCP(1251);//кодировка вывода

    int mas[5];
    int i = 0;

    //ЧТЕНИЕ из файла
    string line;
    ifstream file("C:\\Users\\Top16\\Desktop\\test.txt");//открываем поток для чтения файла 
    if (file.is_open()) {
        while (getline(file, line)) {//пока я могу видеть строку(пока строки не закончились)
            mas[i] = stoi(line);
            i++;
        }
    }
    file.close();

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += mas[i];
    }
    cout << "Сумма элементов из файла = " << sum << endl;

    //*********************************************************************
    
    //ЧТЕНИЕ из файла
    //string line;
    //ifstream file("C:\\Users\\Top16\\Desktop\\test.txt");//открываем поток для чтения файла 
    //if (file.is_open()) {
    //    while (getline(file, line)) {//пока я могу видеть строку(пока строки не закончились)
    //        cout << line << endl;//вывод строк
    //    }
    //}
    //file.close();

    //*********************************************************************

    //ДОЗАПИСЬ в файл!
    //ofstream file("C:\\Users\\Top16\\Desktop\\test.txt", ios::app);//ios::app режим дозаписи
    //if (file.is_open()) {//ДОЗАПИСЬ в файл
    //    file << "А я дозаписался" << endl;//как cout
    //}
    //file.close();

    //*********************************************************************

    //ПЕРЕЗАПИСЬ файла!
    //ofstream file;//открываем поток, выделение места в оперативной памяти
    //file.open("C:\\Users\\Top16\\Desktop\\test.txt");
    //if (file.is_open()) {//если удалось открыть файл, идет ПЕРЕЗАПИСЬ файла!
    //    file << "Привет" << endl;//как cout
    //    file << "Я тута" << endl;
    //}
    //file.close();


}