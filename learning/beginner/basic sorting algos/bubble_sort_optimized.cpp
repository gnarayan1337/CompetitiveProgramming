#include <bits/stdc++.h>

using namespace std;

void optimizedBubbleSort(int arr[], int n);
void printArray(int arr[], int n);

// this bubble sort is optimized by stopping the algorithm if the inner loop didn't cause any swap.

void optimizedBubbleSort(int arr[], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        //j starts iterating through a certain number(ex. [3,2,1], i is responsible for choosing a number. so once 3 is done, staart doing 2, then start doing 1 etc. j is the one that sorts them. if the number is already sorted you dont even need to do j.)
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }

}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << ", ";
}

int main() {

    int arr[] { -3, -55, 1, 12, 1523, 5, 13, -33, 32, 22, 94, -3 };
    int n = sizeof(arr) / sizeof(int);

    optimizedBubbleSort(arr, n);
    printArray(arr, n);


    return 0;
}
