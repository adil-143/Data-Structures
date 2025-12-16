#include<bits/stdc++.h>
using namespace std;

int twopointerreverse(int arr[], int n){
    int start = 0, end = n - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
}

int reverseusingvector(vector<int> &v){
    int start = 0, end = v.size() - 1;
    while(start < end){
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return 0;

}
int main(){
    int n; 
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Reversing the array by printing from end to start

    // cout << "Reversed array:\n";
    // for(int i = n-1; i >= 0; i--){
    //     cout << arr[i] << " ";
    // }

    //two pointer approach to reverse the array in place

    twopointerreverse(arr, n);
    cout << "Reversed array:\n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    vector<int> v;
    v = {1,2,3,4,5};
    reverseusingvector(v);
    cout << "\nReversed vector:\n";
    for(int i : v){
        cout << i << " ";
    }
    
    return 0;

}