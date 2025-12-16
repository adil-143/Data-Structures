#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {4, 5, 6, 7, 8};

    int i =0, j=0;

    cout << "Intersection elements are: ";
    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) {
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if (a[i] < b[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    //TIME COMPLEXITY: O(n log n) if arrays are unsorted (due to sorting)
    //TIME COMPLEXITY: O(n) if arrays are already sorted

    //NESTED LOOP APPROACH
    // for(int m = 0; m < a.size(); m++) {
    //     for(int n = 0; n < b.size(); n++) {
    //         if(a[m] == b[n]) {
    //             cout << a[m] << " ";
    //         }
    //     }
    // }
    //TIME COMPLEXITY: O(n^2)
    
    return 0;
}