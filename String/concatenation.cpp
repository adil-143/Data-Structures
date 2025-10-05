#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "Hello";
    string s2 = " World";
    string s3 = s1 + s2; // Using + operator
    cout<<"The concatenated string using + operator is: "<<s3<<endl;

    s1.append(s2); // Using append function
    cout<<"The concatenated string using append function is: "<<s1<<endl;

    string s4 = "Mohd";
    string s5 = " Adil";
    string res = "";
    for(char c : s4){
        res.push_back(c); // Manually concatenating by adding each character
    }
    for(char c : s5){
        res.push_back(c);
    }
    cout<<"The concatenated string by manually adding characters is: "<<res<<endl;

    return 0;

}