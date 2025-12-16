#include<iostream>
using namespace std;

int main(){
    int a =5;
    int *p = &a;
    int **q = &p;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of p (Address of a): " << p << endl;
    cout << "Value pointed to by p: " << *p << endl;
    cout << "Address of p: " << &p << endl;
    cout << "Value of q (Address of p): " << q << endl;
    cout << "Value pointed to by q (Address of a): " << *q << endl;
    cout << "Value pointed to by the value pointed to by q (Value of a): " << **q << endl;
    return 0;
}