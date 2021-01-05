#include <iostream>
#include <fstream>
#include  <string.h>
#include "class1.h"
#include "class2.h"
#include "class3.h"
#include "class4.h"

using namespace std;

struct var
{
    int num;
    int balance;
    int password, choice;
    int withdraw, deposit;
    char correct = true;
    int n;
};



int main(){
    var v;

    // 4 objects From classes
   
    Display d;
    Search s;
    Options o;
    Atm a;

    system("color D");
    

    cout << "\n************************************* Welcome To ATM Account System ***********************************\n";

    //Password option
    // cout << "\n\t\t\t\tEnter Your Password :\t";
    // cin >> password;
    // cout << "\n";
    // while (password !=1234) {
    //     cerr << " You Password is Wrong ! ";
    //     exit(1);
    // }


    do {

        cout << "\n\t\t\t\t(1). Insert your data............." << endl;
        cout << "\t\t\t\t(2). Check your data ............." << endl;
        cout << "\t\t\t\t(3). Deposit cash................." << endl;
        cout << "\t\t\t\t(4). Withdraw cash................" << endl;
        cout << "\t\t\t\t(5). Search your balance.........." << endl;
        cout << "\t\t\t\t(6). Change your current balance ." << endl;
        cout << "\t\t\t\t(7). Delete account..............." << endl;
        cout << "\t\t\t\t(8). Quite........................" << endl;

        cout << "\n\n\t\t\t_____________________ *** (Choose From The Mneu) *** ____________________\t\n";
        cin >> v.choice;

        switch (v.choice) {

        case 1:
            o.insertatm();
            break;


        case 2:
            d.showData();
            break;



        case 3:
        	    cout << "-Enter the amount : ";
				cin >> v.n;
				cout << "-Please enter your current balance =$";
				cin >> v.balance;
				v.balance = v.balance + v.n;
				cout << "-Your current balance is = " << v.balance<<" $" << endl;      	
            break;


        case 4:
           		cout << "Enter the amount to withdraw" << endl;
				cin >> v.n;
				cout << "-Please enter your current balance =$";
				cin >> v.balance;
            if (v.n > v.balance) {
                cout << "-You don't have enough money" << endl;
            }
            else {

                v.balance = v.balance -v.n;
                cout << "-Your current balance is= " << v.balance<<" $" << endl;

                
            }
            break;

        case 5:
            s.search_atm();
            break;
        case 6:
            o.update_atm();
            break;
        case 7:
            o.delete_atm();
            break;

        case 8:
            cout << "\n.................................* Thanks *.................................\n";
            v.correct = false;
            break;

        default:
            cout << "The Number Doesn't Exist ! ................";
            break;

        }



    } while (v.correct != false);


    return 0;
}
