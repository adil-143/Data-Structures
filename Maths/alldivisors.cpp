#include<bits/stdc++.h>
using namespace std;

vector<int> allDivisors(int n){
    vector<int> divisors;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            divisors.push_back(i);
            if(i != n / i){
                divisors.push_back(n / i);
            }
        }

    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"All divisors of "<<n<<" are: ";
    vector<int> divisors = allDivisors(n);
    for(int div : divisors){
        cout<<div<<" ";
    }
    return 0;
}