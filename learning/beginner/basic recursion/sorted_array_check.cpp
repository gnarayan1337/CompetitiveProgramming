// author : gautam narayan

#include <iostream>
#include <algorithm>

using namespace std;

// check if arr[0] < arr[1] and then check if rest of the array is sorted

bool isSorted(int arr[], int n) {
    // base case
    if (n == 1 or n == 0) {
        return true;
    }

    // recursive case
    if (arr[0] < arr[1] and isSorted(arr + 1, n - 1)) {
        return true;
    }
    else
        return false;
}

int main() {
   cin.tie(nullptr) -> ios::sync_with_stdio(false);

   int arr[] = {1, 2, 3, 5, 4, 6};
   int n = sizeof(arr)/sizeof(arr[0]);

   cout << isSorted(arr, n);

    return 0;
}
