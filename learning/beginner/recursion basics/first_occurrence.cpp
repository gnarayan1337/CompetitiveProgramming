#include <iostream>
using namespace std;

// write recursive function to find the first occurrence of an element in an array
// think linear search

int firstOcc(int arr[], int n, int key) {
    // base case
    if (n == 0) {
        return -1;
    }

    // rec case
    if (arr[0] == key) {
        return 0;
    }
    int subIndex = firstOcc(arr + 1, n - 1, key);
    if (subIndex != -1) {
        return subIndex + 1;
    }
    return -1;
}

int main() {

    int arr[] = {1, 3, 5, 7, 6, 2, 11, 21};
    int n = sizeof(arr) / sizeof(int);
    int key = 7;
    cout << firstOcc(arr, n, key) << "\n";

    return 0;
}
