#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void insertionSort(vector<int>& arr, int n){
        //Outer loop iterate through all the elements of the array
        for(int i=0; i<=n-1; i++){
            //Takes an element
            int j=i;

            //Then place it to its correct position
            while(j>0 && arr[j-1]>arr[j]){
                swap(arr[j-1], arr[j]);
                j--;
            }
        }
    }
};

int main() {
    // Sample array
    vector<int> arr = {10, 7, 8, 9, 1, 5};

    // Create solution object
    Solution sol;

    // Apply insertionsort
    sol.insertionSort(arr, arr.size());

    // Print sorted array
    for (int num : arr)
        cout << num << " ";
    
    return 0;
}
