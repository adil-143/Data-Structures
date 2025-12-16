#include<iostream>
using namespace std;
//array pointer is pointer which points to first element of array
//array name itself is pointer which points to first element of array
//when we use array name it gives base address of array
int main(){
    int arr[] = {10, 20, 30, 40, 50};

    cout<< arr << endl;          //prints base address of array
    cout<< *arr << endl;         //prints first element of array
    cout<< *(arr + 1) << endl;     //prints second element of array
    //because elements are stored in contiguous memory locations

    //Addition of pointers are not allowed but we can subtarct two pointers of same data type

    int *ptr2;
    int *ptr1 = ptr2 + 2;

    cout << ptr1 - ptr2 << endl; //prints 2 because each integer takes 4 bytes so 8/4 = 2

    //Comparison of two pointers of same data type is allowed
    if(ptr1 > ptr2){
        cout<<"ptr1 is greater than ptr2"<<endl;
    }
    else{
        cout<<"ptr2 is greater than ptr1"<<endl;
    }
}