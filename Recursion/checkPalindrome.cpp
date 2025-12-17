#include<bits/stdc++.h>
using namespace std;

bool checckPalindrome(string str, int i=0){
    int n = str.length();
    if(i > n/2){
        return true;
    }
    if(str[i] != str[n-i-1]){
        return false;
    }
    return checckPalindrome(str, i+1);
}

int main(){
    string str;
    cin>>str;
    if(checckPalindrome(str)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;
}