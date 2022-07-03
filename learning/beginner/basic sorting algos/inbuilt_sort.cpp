#include <iostream>
#include <algorithm>
using namespace std;

bool compare (int a, int b) {
    return a < b;
}

int main() {

    int arr[] = {10,9,8,6,5,4,3,2,11,16,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    //sort(arr, n, )
    //sort is in n log n
    sort(arr, arr + n, compare);

    //if you want to reverse array
    reverse(arr, arr + n);

    for (int x : arr)
        cout << x << ", ";

    return 0;
}
