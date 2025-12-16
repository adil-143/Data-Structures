#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE APPROACH
// int gcd(int a, int b){
//     for(int i =min (a,b); i>1; i--){
//         if(a % i ==0 && b % i ==0){
//             return i;
//         }
//     }
//     return 1;
// }

//OPTIMIZED APPROACH (Euclidean Algorithm)
int gcd(int a, int b){
    while(a>0 && b>0){
        if(a > b){
            a = a % b;
        } else {
            b = b % a;
        }
    }
    // if(a == 0){
    //     return b;
    // } else {
    //     return a;
    // }
    return a+b; // since one of them is zero
}

int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd(a,b)<<endl;
    return 0;
}