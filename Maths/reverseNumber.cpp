#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n){
    if(n == 0) return 0;
    int reversedNum = 0;
    while(n>0){
        int lastDigit = n%10;
        reversedNum = reversedNum * 10 + lastDigit;
        n = n / 10; 
    }
    return reversedNum;
}

int main(){
    int n;
    cin >> n;
    int result = reverseNumber(n);
    cout << result << endl;
    return 0;
}