#include<iostream>
using namespace std;

void showMenu(){
    cout << "********* Menu *********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposite" << endl;
    cout << "3. Withdrawal" << endl;
    cout << "4. Exit" << endl;
    cout << "************************" << endl;
}

int main()
{
    int option;
    double balance = 500;

    do{
        showMenu();
        cout << "Option: ";
        cin >> option;
        system("cls");
        switch (option)
        {
        case 1: cout << "Balance is " << balance << "$" << endl << endl; break;
        case 2: cout << "Deposite balance: ";
            double depositeAmount;
            cin >> depositeAmount;
            balance += depositeAmount;
            cout << "Total Balance is: " << balance << endl << endl;
            break;
        case 3: cout << "Withdrawal amount is: ";
            double withdrawaAmount;
            cin >> withdrawaAmount;
            if (withdrawaAmount <= balance)
                balance -= withdrawaAmount;
            else
                cout << "Not enough Money" << endl;
            cout << "Total Balance is: " << balance << endl << endl;
            break;
        }
    }while(option!=4);
    system("pause>0");
}