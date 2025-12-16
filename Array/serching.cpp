#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int value;
    cout << "Enter value to search: ";
    cin >> value;


    // Linear Search
    // bool found = false;

    // for(int i = 0; i < n; i++){
    //     if(arr[i] == value){
    //         cout << "Element found at index: " << i << "\n";
    //         found = true;
    //         break;
    //     }
    // }
    // if(!found){
    //     cout << "Element not found in the array.\n";
    // }


    // BINARY SEARCH
    sort(arr, arr + n); // Sorting the array for binary search
    cout << "Sorted array for Binary Search:\n";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    int left = 0, right = n - 1;
    int found = false;

    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == value){
            cout << "Element found at index (Binary Search): " << mid << "\n";
            found = true;
            break;
        }
        else if(arr[mid] < value){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }

    return 0;
}