#include<bits/stdc++.h>
using namespace std;

void insertAtBeginning(int arr[], int &n, int element) {
    for(int i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = element;
    n++;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void insertAtEnd(int arr[], int &n, int element) {
    arr[n] = element;
    n++;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void insertAtIndex(int arr[], int &n, int index, int element) {
    for(int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    n++;
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

    int element, index;
    cout << "Enter index and element to insert: ";
    cin >> index >> element;

    cout << "Array after insertion at index:\n"; 
    insertAtIndex(arr, n, index, element);
    
    cout << "\nArray after insertion at end:\n";
    insertAtEnd(arr, n, element);
    
    cout << "\nArray after insertion at beginning:\n";
    insertAtBeginning(arr, n, element);
    



    // // Insertion using vector
    // vector<int> arr;
    // int n, element;
    // for(int i = 0; i < n; i++) {
    //     cin >> element;
    //     arr.push_back(element);
    // }
    // arr.insert(arr.begin(), 111);

    // // Insert at end
    // arr.push_back(222);

    // // Insert at index
    // int index;
    // arr.insert(arr.begin() + 2, 333);

    return 0;
}