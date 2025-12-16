#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    if(n == 0) return 0;
    int count = 0;
    while(n>0){
        count++;
        n = n / 10;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    int result = countDigits(n);
    cout << result << endl;
    return 0;
}