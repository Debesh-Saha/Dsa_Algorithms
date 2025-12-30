#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void bubbleSort(vector<int>& arr, int n){
        //The outer loop run from backwards as we need to push the maximum by adjacent swapping
        for(int i=n-1; i>=1; i--){
            int didSwap=0;
            //Inner loop run from 0 to i-1 to check the adjacent numbers
            for(int j=0; j<=i-1; j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    didSwap=1;
                } 
            }
            //If in any case did swap is 0 that means the numbers are sorted..
            //No need to run loop further..
            if(didSwap==0) break;
        }
    }
};

int main() {
    // Sample array
    vector<int> arr = {10, 7, 8, 9, 1, 5};

    // Create solution object
    Solution sol;

    // Apply bubblesort
    sol.bubbleSort(arr, arr.size());

    // Print sorted array
    for (int num : arr)
        cout << num << " ";
    
    return 0;
}
