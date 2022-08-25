#include<iostream>
using namespace std;
int main()
{
    //+,-,*,/,%

    cout << 6+7 << endl;
    cout << 6-8 << endl;
    cout << 9*10 << endl;
    cout << 5/2 << endl;  // for decimal value give atleast one decimal ex. 2.0 or 5.0
    cout << 5%2 << endl;
    system("cls");
        
    // ++, --
    int counter = 9;
    counter++;
    cout << counter << endl;
    counter--;
    cout << counter << endl;
    system("cls");

    int counter2 = 5;
    cout << counter2++ << endl; // post-increament
    cout << ++counter2 << endl; // pre-increment
    cout << counter2-- << endl; //post-decreament
    cout << counter2 << endl;
    system("cls");

    //<, >, <=, >=, ==, !=
    int a {5}, b {5};
    cout << (a<b);
    cout << (a!=b);
    system("cls");
    
    //&&, ||, !                  Logical operators
    cout << (a == 5 && b == 5);
    cout << (a == 5 || b == 5);
    system("cls");
    
    //=, +=, -=, *=, /=, %=      assignment operator
    int x{5};
    x+=7;
    cout << x << endl;
    system("pause");

    return 0;

}
