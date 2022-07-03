#include <iostream>
#include <vector>
using namespace std;

// reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
// at(g) – Returns a reference to the element at position ‘g’ in the vector
// front() – Returns a reference to the first element in the vector
// back() – Returns a reference to the last element in the vector
// data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.

int main() {

    vector<int> arr;

    for (int i = 1; i <= 10; i++)
        arr.push_back(i * 10);
    
    cout << "\nReference operator [g]: arr[2] = " << arr[2];
    cout << "\nat: arr.at(4) = " << arr.at(4);
    cout << "\nfront(): arr.front() = " << arr.front();
    cout << "\nback(): arr.back() = " << arr.back();

    //pointer to the first element
    int* pos = arr.data();

    cout << "\nThe first element is " << *pos;

    return 0;
}

/*
OUTPUT: 

Reference operator [g]: arr[2] = 30
at: arr.at(4) = 50
front(): arr.front() = 10
back(): arr.back() = 100
The first element is 10
*/
