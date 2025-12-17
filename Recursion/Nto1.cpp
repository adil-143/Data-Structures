#include<bits/stdc++.h>
using namespace std;

// void Nto1(int i, int n){
//     if(i < 1) return;
//     cout<<i<<endl;
//     Nto1(i-1, n);
// }

void backtracking(int i, int n){
    if(i > n )
        return;
    backtracking(i+1, n);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
    // Nto1(n, n);
    backtracking(1, n);
    return 0;
}