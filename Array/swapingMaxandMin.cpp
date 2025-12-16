#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    int minIndex = 0, maxIndex = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }
    }

    swap(arr[minIndex], arr[maxIndex]);

    cout << "Array after swapping min and max elements:\n";
    for(int i : arr){
        cout << i <<" ";
    }

    return 0;
}