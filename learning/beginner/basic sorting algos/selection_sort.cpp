//author: gautam narayan
//https://www.geeksforgeeks.org/selection-sort/

//algorithm maintains two subarrays
//1) the subarray which is already sorted.
//2)remaining subarray which is unsorted
//in every interation of selections osrt, the min element is picked and moved to the sorted subarray

//example:
//arr[] = 64 25 12 22 11

// Find the minimum element in arr[0...4]
// and place it at beginning
//11 | 25 12 22 64

// Find the minimum element in arr[1...4]
// and place it at beginning of arr[1...4]
//11 12 | 25 22 64

// Find the minimum element in arr[2...4]
// and place it at beginning of arr[2...4]
//11 12 22 | 25 64

// Find the minimum element in arr[3...4]
// and place it at beginning of arr[3...4]
//11 12 22 25 | 64 

#include <bits/stdc++.h>
using namespace std;

void selection_sort (int arr[], int n) {
    for (int pos = 0; pos <= n-2; pos++) {
        int current = arr[pos];
        int min_position = pos;

        //using this loop to find min element
        for (int j = pos; j < n; j++) {
            if (arr[j] < arr[min_position])
                min_position = j;
        }
        //swap outside the loop
        swap(arr[min_position], arr[pos]);
    }
}

int main() {
    int arr[] = {-2, 234, 43, 23, 4, -244, -6, 5, -9431857, 23454235, -1234, 234, 24, 245, -12304, 234, 870, 333, 999, 666, 6890859};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);

    for (auto x : arr) 
        cout << x << ", ";
    
    cout << endl;

    return 0;
}
