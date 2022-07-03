//author: gautam narayan

//to sort an array of size n in ascending order
//1. iterate from arr[1] to arr[n] over the array
//2. compare the current element (key) to its predecessor
/*3. If the key element is smaller than its predecessor, compare it to the elements before,
move the greater elements one position up to make space for the swapped element*/


#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int a[], int n) {

    for (int i = 1; i < n; i++) {
        int current_element = a[i];
        int previous_element = i - 1;
        while(previous_element >= 0 and a[previous_element] > current_element) {
            a[previous_element + 1] = a[previous_element];
            previous_element--;
        }
        a[previous_element + 1] = current_element;
    }
}


int main() {

    int arr[] = { -2, 3, 4, -1, 5, -12, 6, 1, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, n);

    for (auto x : arr)
        cout << x << ", ";
    
    cout << endl;

    return 0;
}


/*
//practice
#include <bits/stdc++.h>

using namespace std;

void insertion_sort(vector<int>& arr, int n) {

    for (int i = 1; i < n; i++) {
        int current_element = arr[i];
        int previous_element = i - 1;

        while (previous_element >= 0 && arr[previous_element] > current_element) {
            arr[previous_element + 1] = arr[previous_element];
            previous_element--;
        }
        arr[previous_element + 1] = current_element;
    }
}

int main() {

    vector<int> arr {-2, 5, 2, 6, 7, -12, 4, 2, -55, 1, 23, 3};
    int n = arr.size();
    insertion_sort(arr, n);

    for (auto x : arr)
        cout << x << ", ";
    cout << endl;
    return 0;
}
*/
