#include <QApplication>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include "mainwindow.h"
#include <fstream>
#include <stdlib.h>
#include <iostream>


using namespace std;

int main(int argc, char *argv[])
{
    ifstream kniga("book.epub");
    if (!kniga.is_open())
    {
        cout<<"eror"<<endl;
    }
    vector<string> lines;
    while(1) {
        string temp;
        getline(kniga, temp);
        if(!kniga) break;
        lines.push_back(move(temp));
    }

    QApplication a(argc, argv);
    Window w;
    w.show();

    return a.exec();
}


