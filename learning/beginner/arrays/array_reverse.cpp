//author: gautam narayan

#include <iostream>

using namespace std;

void reverseArray(int arr[], int n);

void reverseArray(int arr[], int n) {

    int s = 0;
    int e = n - 1;

    while (s < e) {
        //swap(arr[s], arr[e]);
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s += 1;
        e -= 1;
    }
    
}

int main() {

    int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
        cout << arr[i] << ", ";
    cout << endl;


    reverseArray(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << ", ";
    cout << endl;

    return 0;
}


/*

my own practice - ignore

#include <iostream>

using namespace std;

void array_swap(int arr[], int n);

void array_swap(int arr[], int n) {

    int s = 0;
    int e = n - 1;

    while (s < e) {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        //swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }
}

int main() {

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i ++)
        cout << arr[i];
    cout << endl;
    array_swap(arr, n);

    for (int i = 0; i < n; i ++)
        cout << arr[i];

    cout << endl;
    return 0;
}
*/
