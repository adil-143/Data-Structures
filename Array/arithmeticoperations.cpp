#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 20, 50};
    int n = 5;
    
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum of elements: " << sum << endl;

    int product = 1;
    for(int i = 0; i < n; i++) {
        product *= arr[i];
    }
    cout << "Product of elements: " << product << endl;

    int average = sum / n;
    cout << "Average of elements: " << average << endl;

    int remainder = sum % n;
    cout << "Remainder when sum is divided by number of elements: " << remainder << endl;
    
    return 0;
}