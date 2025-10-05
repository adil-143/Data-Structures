#include<bits/stdc++.h>
using namespace std;

bool checkstring(string s1, string s2){
    return s1 == s2;
}


int main(){
    string s1 = "hello";
    string s2 = "hello";

    string a,b;
    cout << "Enter two strings: ";
    cin >> a >> b;
    if(s1 == s2){
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }

    if(checkstring(a , b)){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}