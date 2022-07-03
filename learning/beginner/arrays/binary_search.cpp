//author: gautam narayan

#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key);

int binary_search(int arr[], int n, int key) {
    //Implement binary search, s is start, e is end
    int s = 0;
    int e = n - 1;
    //rly important that you do <= operator here
    while (s <= e) {
        //int mid = (s + e) / 2;
        int mid = e + (s - e) / 2;

        if (arr[mid] == key)
            //what the index is going to be equal to
            return mid;
        else if (arr[mid] > key)
            e = mid - 1;
        else if (arr[mid] < key)
            s = mid + 1;
    }
    //breaks out of loop
    return -1;
}

int main() {

    //already sorted array
    int arr[] = { 10, 20, 30, 40, 45, 60, 70, 89 };
    int n = sizeof(arr) / sizeof(int);

    //key is the number we are looking for
    int key;
    cin >> key;

    int index = binary_search(arr, n, key);

    if (index != -1)
        cout << key << " is present at index " << index << endl;
    else
        cout << key << " is not present in the array" << endl;
    
    return 0;
}


/*

my own practice--ignore

#include <iostream>

using namespace std;

int binary_search(int arr[], int n, int key);

int binary_search(int arr[], int n, int key) {

    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            s = mid + 1;
        else if (arr[mid] > key)
            e = mid - 1; 
    }
    return -1;
}

int main() {

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    while (true) {
        int key;
        cout << "Enter number: ";
        cin >> key;

        int index = binary_search(arr, n , key);

        if (index != -1)
            cout << key << " is located at index " << index << endl;
        else    
            cout << key << " is not located within the array." << endl; 
    }
    return 0;
}
*/
