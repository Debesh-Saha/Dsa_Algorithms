#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void selectionSort(vector<int>& arr, int n){
        //Outer loops run for n-1 times where n is array size
        for(int i=0; i<=n-2; i++){
            
            //Initially we assume minimum number to be at index 0
            int min=i;
            
            //Inner loops run for n times where n is array size
            for(int j=i; j<=n-1; j++){
                //If we get element less than our assumed minimum element
                if(arr[j]<arr[min]){
                    //We update our minimum
                    min=j;
                }
            }

            //Then swap minimum with the current index
            int temp= arr[min];
            arr[min]= arr[i];
            arr[i]= temp;
        }
    }
};

int main() {
    // Sample array
    vector<int> arr = {10, 7, 8, 9, 1, 5};

    // Create solution object
    Solution sol;

    // Apply quicksort
    sol.selectionSort(arr, arr.size());

    // Print sorted array
    for (int num : arr)
        cout << num << " ";
    
    return 0;
}
