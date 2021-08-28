#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    string word;
    ifstream inputText("text.txt");         //��������� �����, ���� text.txt � ����� �������

    map<string, int> arrWords;

    while (inputText >> word)               //��������� ����� �� ������ ����
        arrWords[word]++;
    inputText.close();                      //��������� �����

    map <string, int>::iterator iter;
    ofstream result("result.txt");                               //��������� ���� ��� ������
    for (iter = arrWords.begin(); iter != arrWords.end(); iter++)           //������� �����
        result << iter->first << ": " << iter->second << endl;

    cout << "Done !!!" << endl;
    cout << "Open file result.txt in project folder" << endl;
}