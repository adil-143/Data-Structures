#include<bits/stdc++.h>
using namespace std;

int getlength(string str){
    
    // int length = 0;
    // for(char ch : str){
    //     length++;
    // }
    // return length;

    int i = 0, cnt = 0;
    while(str[i]){
        i++;
        cnt++;
    }
    return cnt;
}

int main(){
    string str = "Hello World";

    cout << "Length using size(): " << str.size() << endl;

    cout << "Length using length(): " << str.length() << endl;

    cout<< "Length using custom function: " << getlength(str) << endl;

    return 0;
}

