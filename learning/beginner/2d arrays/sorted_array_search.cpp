#include <iostream>
using namespace std;
//staircase algorithm

pair<int, int> staircaseSearch(int arr[][4], int rows, int cols, int key) {

    //if the element is not present return (-1,-1)
    if (key < arr[0][0] or key > arr[rows - 1][cols - 1]) {
        return {-1, -1};
    }

    int i = 0;
    int j = cols - 1;

    while (i <= rows - 1 and j >= 0) {
        if (arr[i][j] == key) {
            return {i, j};
        }
        else if (arr[i][j] > key) {
            j--;
        }
        else {
            i++;
        }
    }
    return {-1, -1};
}


int main() {

    int arr[][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}};
    
    int rows = 4, cols = 4;

    pair<int, int> coords = staircaseSearch (arr, rows, cols, 33);
    cout << coords.first << " " << coords.second << endl;

    return 0;
}
