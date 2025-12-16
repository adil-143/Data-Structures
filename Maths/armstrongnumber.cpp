#include<bits/stdc++.h>
using namespace std;

int armstrongNumber(int n){
    if(n == 0) return 0;
    int originalNum = n;
    int temp = n;
    int sum = 0;
    int digits = 0;
    while(temp > 0){
        digits++;
        temp = temp / 10;
    }

    while(n > 0){
        int lastDigit = n % 10;
        sum += pow(lastDigit, digits); // Assuming 3-digit Armstrong number
        n = n / 10;
    }
    return sum == originalNum;
}

int main(){
    int n;
    cin >> n;   
    int result = armstrongNumber(n);
    cout << result << endl;
    return 0;
}