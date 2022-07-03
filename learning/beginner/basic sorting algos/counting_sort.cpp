#include <iostream>
#include <vector>
#include <climits>
using namespace std;


void counting_sort(int arr[], int n);
void print_array(int arr[], int n);

void counting_sort(int arr[], int n) {
    //largest element
    int largest = INT_MIN;
    for (int i = 0; i < n; i++) {
        largest = max(largest, arr[i]);
    }

    //create a count array
    vector<int> frequency(largest + 1, 0);

    //update the frequency array
    for (int i = 0; i < n; i++)
        frequency[arr[i]]++;

    //put back the elements from freq into right array

    int j = 0;
    for (int i = 0; i <= largest; i++) {
        while(frequency[i] > 0) {
            arr[j] = i;
            frequency[i]--;
            j++;
        }
    }
}

int main() {

    int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
    int n = sizeof(arr) / sizeof(int);
    counting_sort(arr, n);
    print_array(arr, n);

    return 0;
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }
}
