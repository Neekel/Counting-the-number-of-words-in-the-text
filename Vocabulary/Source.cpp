#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    string word;
    ifstream inputText("text.txt");         //открываем поток, файл text.txt в папке проекта

    map<string, int> arrWords;

    while (inputText >> word)               //разбиваем текст на массив слов
        arrWords[word]++;
    inputText.close();                      //закрываем поток

    map <string, int>::iterator iter;
    ofstream result("result.txt");                               //открываем файл для записи
    for (iter = arrWords.begin(); iter != arrWords.end(); iter++)           //считаем слова
        result << iter->first << ": " << iter->second << endl;

    cout << "Done !!!" << endl;
    cout << "Open file result.txt in project folder" << endl;
}