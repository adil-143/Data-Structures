#include<bits/stdc++.h>
using namespace std;

// void rev(int arr[], int start, int end){
//     if(start >= end) return;
//     swap(arr[start], arr[end]);
//     rev(arr, start+1, end -1);
// }

void rev(int arr[], int n , int i=0){ //using single parameter
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    rev(arr, n, i+1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // rev(arr, 0, n-1);
    rev(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}