#include<iostream>
using namespace std;

int main()
{
    int pin, userPin = 1234, errorcounter = 0;
   
    do{
        cout << "PIN: ";
        cin >> pin;
        if(pin!=userPin)
            errorcounter++;
    }while(errorcounter<3 && pin!=userPin);
    if(errorcounter<3)
        cout << "Loading...";
    else
        cout << "Blocked..." ;
    
    system ("pause>0");
}
