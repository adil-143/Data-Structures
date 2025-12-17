#include<bits/stdc++.h>
using namespace std;

int name(int n){
    if (n ==0)
        return 0;
    cout<<"Hello World"<<endl;
    return name(n-1);
}

void name2(int i, int n){
    if(i>n)
        return;
    cout<<"Adil"<<endl;
    name2(i+1,n);
}

int main(){
    int n;
    cin>>n;
    name(n);
    name2(1,n);
    return 0;
}