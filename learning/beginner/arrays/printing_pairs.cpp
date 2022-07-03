//author: gautam narayan
//assignment: print all possible pairs: eg. (1,2,3,) = (1,2) (1,3) (2,3) 

#include <iostream>

using namespace std;
void printAllPairs(int arr[], int n);

void printAllPairs(int arr[], int n) {

    for (int i = 0; i < n; i++) {
        int x = arr[i];
        
        for (int j = i + 1; j < n; j++) {
            int y = arr[j];

            cout << x << ", " << y << endl;
        }
        cout << endl;
    }
    
}

int main() {

    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printAllPairs(arr, n);

    return 0;
}
