
#include<iostream>
#include <fstream>
#include<string>
#include "class1.h"
using namespace std;

class Options : public Atm {
    
    public:
    //insert//
        void  insertatm() {


            fstream stud;
            stud.open("ATM.txt", ios::app);
            cin.ignore();
            cout << " \n Name : ";
            cin.getline(name, 25);
            cout << " \n Phone : ";
            cin.getline(phone, 25);
            cout << " \n Current : ";
            cin.getline(current, 25);
            stud << name << '|' << phone << '|' << current << '\n';
            cout << " \n Done !\n";
            stud.close();
        }
        // Update
        void update_atm(){
            fstream stud;
            fstream temp;

            stud.open("ATM.txt", ios::in);
            temp.open("temp.txt", ios::out);

            cin.ignore();
            cout << " \n\t -Enter the phone number to update record : ";
            cin.getline(current, 25);
            while (!stud.eof())
            {
                stud.getline(name, 25, '|');
                stud.getline(phone, 25, '|');
                stud.getline(current, 25);
                if (strcmp(phone, a) == 0)
                {

                    cout << " \n\tEnter new value of record  \n ";
                    cout << " \n Name : ";
                    cin.getline(name, 25);
                    cout << " \n Phone : ";
                    cin.getline(phone, 25);
                    cout << " \n Current balance : ";
                    cin.getline(current, 25);
                    temp << name << '|' << phone << '|' << current << '\n';
                }
                else
                {
                    temp << name << '|' << phone << '|' << current << '\n';
                }


            }
            temp.close();
            stud.close();

            stud.open("ATM.txt", ios::out);
            temp.open("temp.txt", ios::in);
            while (!temp.eof())
            {
                temp.getline(name, 25, '|');
                temp.getline(phone, 25, '|');
                temp.getline(current, 25);
                stud << name << '|' << phone << '|' << current << '\n';
            }
            temp.close();
            stud.close();
            remove("temp.txt");
            cout << "\n Done !!! \n";
        }

        // delete //   
        void delete_atm(){
            fstream stud;
            fstream temp;

            stud.open("ATM.txt", ios::in);
            temp.open("temp.txt", ios::out);
            cin.ignore();
            cout << " \n\t Enter the phone number to delete record : ";
            cin.getline(current, 25);
            while (!stud.eof())
            {
                stud.getline(name, 25, '|');
                stud.getline(phone, 25, '|');
                stud.getline(current, 25);
                if (strcmp(phone, a) == 0)
                {
                    continue;
                }
                else
                {
                    temp << name << '|' << phone << '|' << current << '\n';
                }


            }
            temp.close();
            stud.close();

            stud.open("ATM.txt", ios::out);
            temp.open("temp.txt", ios::in);
            while (!temp.eof())
            {
                temp.getline(name, 25, '|');
                temp.getline(phone, 25, '|');
                temp.getline(current, 25);
                stud << name << '|' << phone << '|' << current << '\n';
            }
            temp.close();
            stud.close();
            remove("temp.txt");
            cout << "\n done !!! \n";
        }
       
        
 


};
