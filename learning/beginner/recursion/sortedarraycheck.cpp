// author : Gautam Narayan
// date : 30 November 2022

#include <iostream>
#include <vector>

using namespace std;

bool isSorted(int arr[], int n);
bool isSorted(int arr[], int n) {

    // base case
    if (n == 1 || n == 0)
        return true;

    // recursive case
    if (arr[0] < arr[1] and isSorted(arr + 1, n - 1))
        return true;
    return false;

}

int main() {
    cin.tie(nullptr) -> ios::sync_with_stdio(false);

    int arr[] = {1, 2, 3, 5, 4, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << isSorted(arr, n) << "\n";

    return 0;
}
