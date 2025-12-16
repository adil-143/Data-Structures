#include<bits/stdc++.h>
using namespace std;

int extraction(int n){
    if(n == 0) return {0};
    vector<int> digits;
    while(n > 0){
        int lastdigit = n % 10;
        digits.push_back(lastdigit);
        n = n / 10;
    }

    // Uncomment below lines to print the digits in correct order
    // reverse(digits.begin(), digits.end());
    // for(int d : digits){
    //     cout << d << " ";
    // }
    // return 0;
}

int main(){
    int n;
    cin >> n;
    extraction(n);
    return 0;
}
