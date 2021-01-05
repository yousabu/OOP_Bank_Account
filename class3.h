
#include <iostream>
#include<fstream>
#include<string>
#include "class1.h"
using namespace std;

class Search : public Atm
{
    
    public:
        void search_atm(void){

        fstream stud;
        stud.open("ATM.txt", ios::in);

        char a[25];
        cout << " \n enter the phone to search about it : ";
        cin.ignore();
        cin.getline(a, 25);
        int x = 0;
        cout << " \n\t name \t phone \t current \n";
        while (!stud.eof())
        {
            stud.getline(name, 25, '|');
            stud.getline(phone, 25, '|');
            stud.getline(current, 25);
            if (strcmp(phone, a) == 0)
            {
                cout << "\n \t " << name << "\t" << phone << "\t" << current << endl;
                x = 1;
                break;
            }

        }
        if (x == 0)
        {
            cout << " \n not found !!!!\n";
        }
        stud.close();
    }
};
