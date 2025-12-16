#include<bits/stdc++.h>
using namespace std;

// Function to find the maximum sum of a subarray using Kadane's Algorithm
int maximumSumofSubarray(int arr[], int n){
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i = 0; i < n; i++){
        currentSum += arr[i];
        if(currentSum > maxSum){
            maxSum = currentSum;
        }
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    return maxSum;
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
    int result = maximumSumofSubarray(arr, n);
    cout << "Maximum Sum of Subarray: " << result << endl;
    return 0;
}