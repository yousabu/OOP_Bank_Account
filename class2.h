#ifndef SIMPLECLAS_H
#define SIMPLECLAS_H
#include<iostream>
using namespace std;
#include <string>
#include<fstream>
#include "class1.h"

///////////////////////////////////////////////////////////////////////////////////////////

// Class To Show all Data 

class Display : public Atm {

    public:
   
    void showData()
    {

    fstream stud;
    stud.open("ATM.txt", ios::in);

    cout << " \n\t name \t\t phone \t current balance \n";
    while (!stud.eof())
    {
        stud.getline(name, 25, '|');
        stud.getline(phone, 25, '|');
        stud.getline(current, 25);
        cout << "\n \t " << name<<"\t" <<phone << "\t" << " "<<current << endl;

    }
}

};
#endif

