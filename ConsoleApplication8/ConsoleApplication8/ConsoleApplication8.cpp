#define _CRT_SECURE_NO_WARNINGS     
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
struct User {
    int size = 10;
    int row = 10;
    int col = 5;
    char** qwer = new char*[row];
    void Fill_2() {
        for (int i = 0; i < col; i++) {
            qwer[i] = new char[100];
        }
    }
};
void file(int col, int row, char **qwer[]) {
    ofstream fout("C:\\Users\\Вадим\\Desktop\\c++textfile\\qwer_1.txt");
    if (fout.is_open()) {
        cout << "File is open";
    }
    else {
        cout << "File isn't open";
    }
    for (int i = 0; i < col; i++)
    {
        fout << qwer[i];
    }
}
void Fill(User a, int col, int row, char** qwer[]) {
    ofstream fout("C:\\Users\\Вадим\\Desktop\\c++textfile\\qwer_1.txt");
    a.Fill_2();
    for (int i = 0; i < col; i++) {
        cin.getline(a.qwer[i], 100);
    }
    cout << endl;
    for (int i = 0; i < col; i++)
    {
        fout << qwer[i] << endl;
    }
}
void Add_book(User a, int col, int row, char** qwer[]) {
    fstream fout("C:\\Users\\Вадим\\Desktop\\c++textfile\\qwer_1.txt", ios::app);
    char** qwer_1 = new char* [row + 1];
    for (int i = 0; i < col + 1; i++) {
        qwer_1[i] = new char[100];
    }
    fout.getline(qwer, )
    for (int i = 0; i < col; i++) {
        strcpy(qwer_1[i], qwer[i]);
    }
    cin.getline(qwer_1[col], 100);
    qwer = qwer_1;
    for (int i = 0; i < col + 1; i++) {
        cout << qwer[i] << " " << endl;
    }
    for (int i = 0; i < col + 1; i++)
    {
        fout << qwer[i] << endl;
    }

}
void Delete_book(User a, int col, int row, char** qwer[]) {
    fstream fout("C:\\Users\\Вадим\\Desktop\\c++textfile\\qwer_1.txt");
    char** qwer_2 = new char* [row];
    for (int i = 0; i < col - 1; i++) {
        qwer_2[i] = new char[100];
    }
    int pos;
    cin >> pos;
    for (int i = 0; i < pos; i++)
    {
        strcpy(qwer_2[i], qwer[i]);
    }
    for (int i = pos; i < col - 1; i++)
    {
        strcpy(qwer_2[i], qwer[i + 1]);
    }
    qwer = qwer_2;
    for (int i = 0; i < col - 1; i++) {
        cout << qwer[i] << " ";
    }
    for (int i = 0; i < col - 1; i++)
    {
        fout << qwer[i] << endl;
    }
}
void Sort_alf(User a, int col, int row, char** qwer[]) {
    fstream fout("C:\\Users\\Вадим\\Desktop\\c++textfile\\qwer_1.txt");
    char tmp[100];
    for (int i = 1; i < col; i++) {
        for (int j = 0; j < col - i; j++)
        {
            if (strcmp(qwer[j + 1], qwer[j]) < 0)
            {
                strcpy(tmp, qwer[j]);
                strcpy(qwer[j], qwer[j + 1]);
                strcpy(qwer[j + 1], tmp);
            }
        }
    }
    cout << endl;
    for (int i = 0; i < col; i++) {
        cout << qwer[i] << " " << endl;
    }
    for (int i = 0; i < col; i++)
    {
        fout << qwer[i] << endl;
    }

}
void Search() {
    char** key = new char* [100];
    for (int i = 0; i < 1; i++) {
        key[i] = new char[100];
    }
    for (int i = 0; i < 1; i++) {
        cin.getline(key[i], 100);
    }
    cout << endl;
    int j = 0;
    for (int i = 0; i < col; i++) {
        if (strcmp(key[j], qwer[i]) == 0) {
            cout << qwer[i] << endl;
        }
    }
}

struct Users {
    void User() {

    }
};

int main()
{
    setlocale(LC_ALL, "Rus");
    User a;
    /*Users b;*/
    int b = 0;
    
    
    

              //strtok надо присваивать в переменную
    
    //a.file();
    /*cout << "\tВыберите действие\n1.Добавить книгу\n2.Удалить книгу\n3.Отсортировать книги по алфавиту" << endl;
    int num;
    cin >> num;
    switch (num) {
    case 1: {
        a.Add_book();
        break;
    }
    case 2: {
        a.Delete_book();
        break;
    }
    case 3: {
        a.Sort_alf();
        break;
    }
    case 4: {
        b++;
        break;
    }
    default: {
        cout << "Error" << endl;
        break;
    }*/
        
}


