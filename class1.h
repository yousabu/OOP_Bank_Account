 #ifndef SIMPLECLASS_H
#define SIMPLECLASS_H
 #include<iostream>
 #include <fstream>
 #include<string>
 using namespace std;


// The main class have all varibles
// Depost and withdraw class

 class Atm{

    public:
    	
            char name[25];
            char a[25];
            char phone[25];
            char current[25];

    	void deposit_withdraw(int n, int option){
    		int balance;
    		
			if(option==1)
			{
			
				cout << "enter the amount : ";
				cin >> n;
				cout << "please enter your current balance =$";
				cin >> balance;
				balance = balance + n;
				cout << "your current balance is = " << balance<<" $" << endl;
            }
            else if(option==2)
			{
			
				cout << "Enter the amount to withdraw" << endl;
				cin >> n;
				cout << "please enter your current balance =$";
				cin >> balance;
            if (n > balance) {
                cout << "you don't have enough money" << endl;
            }
            else {

                balance = balance - n;
                cout << "your current balance is= $" << balance << endl;

                
            }
    	    }
		}

 };
#endif