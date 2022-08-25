#include <iostream>
using namespace std;

int main()
{
    // swapping value using variable
    int x{20};
    int y{10};

    int temp = x;
    x = y;
    y = temp;

    cout << "x= " << x << " y= " << y << endl;

    // swapping value using 2 variable
    int a{20};
    int b{10};

    a = a+ b;
    b = a- b;
    a = a- b;

    cout << "a= " << a << endl;
    cout << "b= " << b;
    
    return 0;

}
