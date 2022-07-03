#include <iostream>
#include <vector>
using namespace std;

// size() – Returns the number of elements in the vector.
// max_size() – Returns the maximum number of elements that the vector can hold.
// capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
// resize(n) – Resizes the container so that it contains ‘n’ elements.
// empty() – Returns whether the container is empty.
// shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
// reserve() – Requests that the vector capacity be at least enough to contain n elements.

int main() {

    vector<int> arr;

    for (int i = 1; i <= 5; i++)
        arr.push_back(i);
    
    cout << "Size: " << arr.size();
    cout << "\nCapacity: " << arr.capacity();
    cout << "\nMax Size: " << arr.max_size();

    // resizes the vector size to 4
    arr.resize(4);

    // prints the vector size after resize()
    cout << "\nSize: " << arr.size();

    // checks if the vector is empty or not
    if (arr.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";
    
    // shrinks the vector
    arr.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = arr.begin(); it != arr.end(); it++)
        cout << *it << " ";
    
    return 0;
}

/*
OUTPUT:

Size : 5
Capacity : 8
Max_Size : 4611686018427387903
Size : 4
Vector is not empty
Vector elements are: 1 2 3 4
*/
