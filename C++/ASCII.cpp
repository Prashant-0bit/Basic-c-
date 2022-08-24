#include <iostream>
using namespace std;

int main()
{
    char c1, c2, c3, c4;
    cout << (int)'a' << endl;
    cout << int('a') << endl;
    cout << int('A') << endl;
    cout << char(65) << endl;
    cout << " Enter number: ";
    cin >> c1 >> c2 >> c3 >> c4;
    cout << "ASCII number: " << int(c1) << " " << int(c2) << " " 
    << int(c3) << " " << int(c4);
    return 0;
}