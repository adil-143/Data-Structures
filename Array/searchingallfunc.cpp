#include <bits/stdc++.h>
using namespace std;

// 1. Linear Search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key) return i;
    return -1;
}

// 2. Linear Search (all occurrences)
vector<int> linearSearchAll(int arr[], int n, int key) {
    vector<int> pos;
    for (int i = 0; i < n; i++)
        if (arr[i] == key) pos.push_back(i);
    return pos;
}

// 3. Boolean Search
bool searchBool(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key) return true;
    return false;
}

// 4. Binary Search Iterative
int binarySearchIter(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

// 5. Binary Search Recursive
int binarySearchRec(int arr[], int low, int high, int key) {
    if (low > high) return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == key) return mid;
    else if (arr[mid] < key) return binarySearchRec(arr, mid + 1, high, key);
    else return binarySearchRec(arr, low, mid - 1, key);
}

// 6. Vector Linear Search
int searchVector(vector<int> &v, int key) {
    for (int i = 0; i < v.size(); i++)
        if (v[i] == key) return i;
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 20, 50};
    int n = 5;
    int key = 20;

    cout << "Linear Search (first): " << linearSearch(arr, n, key) << endl;

    vector<int> all = linearSearchAll(arr, n, key);
    cout << "All positions: ";
    for (int x : all) cout << x << " ";
    cout << endl;

    cout << "Boolean Search: " << (searchBool(arr, n, key) ? "Found" : "Not Found") << endl;

    cout << "Binary Search Iterative: " << binarySearchIter(arr, n, 30) << endl;

    cout << "Binary Search Recursive: " << binarySearchRec(arr, 0, n-1, 50) << endl;

    vector<int> v = {5, 10, 15, 20};
    cout << "Search in vector: " << searchVector(v, 15) << endl;

    return 0;
}
