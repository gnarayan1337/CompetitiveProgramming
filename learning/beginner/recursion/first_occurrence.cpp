// author : Gautam Narayan
// date : 30 November 2022

#include <iostream>
#include <vector>

using namespace std;

int firstOcc(int arr[], int n, int key);
int firstOcc(int arr[], int n, int key) {

    // base case
    if (n == 0)
        return -1;

    // recursive case
    if (arr[0] == key)
        return 0;
    int subIndex = firstOcc(arr + 1, n - 1, key);
    if (subIndex != -1)
        return subIndex + 1;
    return -1;

}
int main() {
    cin.tie(nullptr) -> ios::sync_with_stdio(false);

    int arr[] = {1, 3, 5, 8, 7, 6, 2, 11, 21};
    int n = sizeof(arr)/sizeof(arr[1]);
    int key = 7;
    cout << firstOcc(arr, n, key) << "\n";

    return 0;
}
