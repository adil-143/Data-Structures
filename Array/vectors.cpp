//Vectors is a dynamic array that can change size at runtime
//Dynamic allocation is done inside the heap memory where as static allocation is done inside the stack memory
//vector has two properties size and capacity
//size is the number of elements present in the vector
//capacity is the total number of elements that can be stored in the vector without allocating more memory
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v = {1,2,3,4,5};

    v.push_back(6); //adds 6 to the end of the vector
    for(int i : v){
        cout<<i<<" "; //prints the elements of the vector
    }
    cout<<endl;

    v.pop_back(); //removes the last element of the vector
    for(int i : v){
        cout<<i<<" "; //prints the elements of the vector
    }
    cout<<endl;

    cout<<"Size of vector: "<<v.size()<<endl; //prints the size of the vector

    vector<int> v2(5,10); //creates a vector of size 5 with all elements as 10
    for(int i : v2){
        cout<<i<<" "; //prints the elements of the vector
    }
    cout<<endl;

    vector<char> v3(4,'a'); //creates a vector of size 4 with all elements as 'a'
    for(char c : v3){
        cout<<c<<" "; //prints the elements of the vector
    }
    cout<<endl;

    cout<<v.front()<<endl; //prints the first element of the vector
    cout<<v.back()<<endl; //prints the last element of the vector
    cout<<v.at(2)<<endl; //prints the element at index 2
    cout<<v.empty()<<endl; //checks if the vector is empty
    cout<<v.size()<<endl; //prints the size of the vector
    cout<<v.capacity()<<endl; //prints the capacity of the vector
    // v.clear(); //clears the vector
}