#include<iostream>
using namespace std;

void changeValue(int *ptr){ //passing by reference using pointer
    *ptr = 20;
}
void changeValue2(int &ptr){ //passing by reference using alais
    ptr = 40;
}
int main(){
    int a = 10;
    changeValue(&a);

    cout << "Value of a after changeValue function: " << a << endl;
    changeValue2(a);
    cout<< "value of a after changeValue2 function: " << a << endl;
    return 0;
}