#include <iostream>
using namespace std;


void printNumber(int* ptrNumber){
    cout << *ptrNumber << endl;
}
void printLetter(char* ptrLetter){
    cout << *ptrLetter << endl;
}

void print(void* ptr, char type){
    switch (type)
    {
    case 'i': cout << *((int*)ptr) << endl; break; // dereference and get actual value nstead of address
    case 'c': cout << *((char*)ptr) << endl; break;
    }

}
int main(){
    int number{5};
    char letter {'D'};
    //printNumber(&number);
    //printLetter(&letter);
    print(&number, 'i'); // use for to get address
    print(&letter, 'c');


    return 0;
}