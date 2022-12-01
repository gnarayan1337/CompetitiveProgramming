// author : Gautam Narayan
// date : 30 November 2022

#include <iostream>
#include <vector>

using namespace std;

int lastOcc(int arr[], int n, int key);
int lastOcc(int arr[], int n, int key) {

    // base case
    if (n == 0)
        return -1;

    // recursive case
    int subIndex = lastOcc(arr + 1, n - 1, key);
    if (subIndex == -1) {
        if(arr[0] == key)
            return 0;
        else
            return -1;
    }
    else
        return subIndex + 1;

}

int main() {
    cin.tie(nullptr) -> ios::sync_with_stdio(false);

    int arr[] = {1, 3, 5, 8, 7, 6, 2, 11, 21};
    int n = sizeof(arr)/sizeof(arr[1]);
    int key = 7;
    cout << lastOcc(arr, n, key) << "\n";

    return 0;
}
