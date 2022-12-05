#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation;
    cout << "** Code Calculator** " << endl;
    cin >> num1 >> operation >> num2;

    switch (operation)
    {
    case '-':cout << num1 << operation << num2 << "=" << num1 - num2; break;
    case '+':cout << num1 << operation << num2 << "=" << num1 + num2; break;
    case '/':cout << num1 << operation << num2 << "=" << num1 / num2; break;
    case '*':cout << num1 << operation << num2 << "=" << num1 * num2; break;
    case '%':
        bool isNum1Int, isNum2Int;
        isNum1Int=((int)num1==num1); //5==5.0
        isNum2Int=((int)num2==num2);

        if (isNum1Int && isNum2Int)
            cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
        else
            cout << "Not valid!";

        break;
    defaul:cout << "Not valid operation!" << endl;
    }


   system("pause>0"); //stop console and press key to start again
                        // return 0; restart after run successfully

}