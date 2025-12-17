#include<bits/stdc++.h>
using namespace std;

// void _1toN(int i, int n){
//     if(i>n)
//         return;
//     cout<<i<<endl;
//     _1toN(i+1,n);
// }

void backtracking(int i, int n){
    if(i<1)
        return;
    backtracking(i-1, n);
    cout<<i<<endl;

}
int main(){
    int n;
    cin>>n;
    // _1toN(1,n);
    backtracking(n, n);
    return 0;
}