#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of ptr (Address of a): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;
    cout << "Address of ptr: " << &ptr << endl; 


    int **ptr2 = &ptr;
    cout << "Value of ptr2 (Address of ptr): " << ptr2 << endl;
    cout << "Value pointed to by ptr2 (Address of a): " << *ptr2 << endl;
    cout << "Value pointed to by the value pointed to by ptr2 (Value of a): " << **ptr2 << endl;

    cout<<*(ptr)<<endl;
    cout<< *(ptr2)<<endl;
    
    return 0;
}