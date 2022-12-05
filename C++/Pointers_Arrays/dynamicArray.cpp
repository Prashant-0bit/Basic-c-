#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Size: ";
    cin >> size;
    //int dynamicArray[size];
    int* dynamicArray = new int[size];

    for (int i=0; i<size; i++){
        cout << "Array" << "[" << i << "]: ";
        cin >> dynamicArray[i];
    }
     for (int i=0; i<size; i++){
        cout << dynamicArray[i] << " ";
    }
    delete[]dynamicArray;
    dynamicArray = NULL;
    return 0;
}

    
    