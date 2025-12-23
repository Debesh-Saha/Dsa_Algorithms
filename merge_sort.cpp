#include <bits/stdc++.h>
using namespace std;

// Function to merge two halves and count inversions
void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;    // Temporary array to store merged elements
    int left = low, right = mid + 1;    // Starting index of left half and right half 

    // Merge elements in sorted order
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }

    // If left half still has elements
    while (left <= mid) temp.push_back(arr[left++]);

    // If right half still has element
    while (right <= high) temp.push_back(arr[right++]);

    // Copy back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    vector<int> arr = {5, 4, 2, 10, 45, 1};
    mergeSort(arr, 0, arr.size() - 1);

    for (int x : arr) cout << x << " ";
    return 0;
}
