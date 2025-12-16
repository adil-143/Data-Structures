#include<bits/stdc++.h>
using namespace std;

void deleteFromBeginning(int arr[], int &n) {
    if (n == 0) {
        cout << "Array is empty!\n";
        return;
    }
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    n--; 
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}


void deleteFromEnd(int arr[], int &n) {
    if (n == 0) {
        cout << "Array is empty!\n";
        return;
    }
    n--;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}


void deleteFromIndex(int arr[], int &n, int index) {
    if (index < 0 || index >= n) {
        cout << "Invalid index!\n";
        return;
    }
    for (int i = index + 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    n--;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void deletebyvalue(int arr[], int &n, int value) {
    int temp;
    for(int i = 0; i< n; i++){
        if(arr[i] == value){
            temp = i;
            for(int j = temp + 1; j < n; j++){
                arr[j - 1] = arr[j];
            }
            n--;
            break;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

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

    int index;
    cout << "Enter index to delete: ";
    cin >> index;

    cout << "Array after deletion at index:\n";
    deleteFromIndex(arr, n, index);

    cout << "\nArray after deletion at end:\n";
    deleteFromEnd(arr, n);

    cout << "\nArray after deletion at beginning:\n";
    deleteFromBeginning(arr, n);

    int value;
    cout << "\nEnter value to delete: ";
    cin >> value;
    cout << "Array after deletion by value:\n";
    deletebyvalue(arr, n, value);
    

    // vector<int> vec;
    // cout << "\nUsing vector:\n";
    // cout << "Enter number of elements: ";
    // int n, index;
    // cin >> n;
    // cout << "Enter elements:\n";

    // for(int i = 0; i < n; i++){
    //     int element;
    //     cin >> element;
    //     vec.push_back(element);
    // }

    // cout << "Enter index to delete: ";
    // cin >> index;

    // if (index < 0 || index >= vec.size()) {
    //     cout << "Invalid index!\n";
    // } else {
    //     vec.erase(vec.begin() + index);
    //     cout << "Array after deletion at index:\n";
    //     for(int i = 0; i < vec.size(); i++) {
    //         cout << vec[i] << " ";
    //     }
    // }

    // vec.pop_back();
    // cout << "\nArray after deletion at end:\n";
    // for(int i = 0; i < vec.size(); i++) {
    //     cout << vec[i] << " ";
    // }

    // vec.erase(vec.begin());
    // cout << "\nArray after deletion at beginning:\n";
    // for(int i = 0; i < vec.size(); i++) {
    //     cout << vec[i] << " ";
    // }
    




    return 0;

}