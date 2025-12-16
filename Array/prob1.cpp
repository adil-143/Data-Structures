#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:\n";
    int idx = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int smallest = arr[0]; //we can use INT_MAX from <climits> as well here it represents the maximum value an int can hold or infinite
    for(int i = 1; i<n; i++) {
        if(arr[i] < smallest){
            smallest = arr[i];
            idx = i;
        }

        // smallest = min(arr[i], smallest); // alternative way using min function from <algorithm>

    }
    
    int largest = arr[0]; //INT_MIN
    int idy = 0;
    for(int i =1; i<n; i++) {
        if(arr[i] > largest){
            largest = arr[i];
            idy = i;
        }

        // largest = max(arr[i], largest); // alternative way using max function from <algorithm>
    
    }

    cout << "Smallest element: " << smallest << endl;
    cout << "Index of smallest element: " << idx << endl;
    cout << "Largest element: " << largest << endl;
    cout << "Index of largest element: " << idy << endl;
    return 0;
}