#include<bits/stdc++.h>
using namespace std;

int checkpalindrome(int n){
    int originalNum = n;
    int reversedNum = 0;
    while(n > 0){
        int lastDigit = n % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        n = n / 10;
    }
    // if(originalNum == reversedNum){
    //     return 1; // It's a palindrome
    // } else {
    //     return 0; // Not a palindrome
    // }
    return originalNum == reversedNum;
}

int main(){
    int n;
    cin >> n;
    int result = checkpalindrome(n);
    cout << result << endl;
    return 0;
}