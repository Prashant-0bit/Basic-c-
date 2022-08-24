#include<iostream>
using namespace std;

int main() 
{
    float annualSalary;
    cout << "Please enter your salary: ";
    cin >> annualSalary;
    float monthlySalary {annualSalary/12};
    cout << "Your montly salary is: "<< monthlySalary << endl;
    cout << "In 10 year you will earn: " << annualSalary*10 << endl;
    double balance {54278456545};
    char character = 'a';
    bool isTrueOrFalse = true;
    int container {245245};

    cout << "size of float is " << sizeof(int) << " Byte \n";
    cout << "Int minimum number is: " << INT_MIN << endl;
    cout << "Int minimum number is: " << INT_MAX << endl;

    return 0;
}