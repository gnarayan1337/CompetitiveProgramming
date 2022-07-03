#include <iostream>
#include <vector>
using namespace std;

// assign(int size, int val) – It assigns new value to the vector elements by replacing old ones
// push_back() – It push the elements into a vector from the back
// pop_back() – It is used to pop or remove elements from a vector from the back.
// insert(iterator position, val) – It inserts new elements before the element at the specified position
// erase(iterator), erase(iterator1, iterator2) – It is used to remove elements from a container from the specified position or range.
// swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
// clear() – It is used to remove all the elements of the vector container
// emplace(iterator position, val) – It extends the container by inserting new element at position
// emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector

int main() {

    vector<int> arr;

    // fill the array with 10 five times
    arr.assign(5, 10);

    cout << "The vector element are: ";
    for (auto x : arr)
        cout << x << " ";

    // inserts 15 to the last position
    arr.push_back(15);
    int n = arr.size();
    cout << "\nThe last element is: " << arr[n - 1];

    // removes last element
    arr.pop_back();

    // prints the vector
    cout << "\nThe vector elements are: ";
    for (auto x : arr)
        cout << x << " ";

    // inserts 5 at the beginning
    arr.insert(arr.begin(), 5);

    cout << "\nThe first element is: " << arr[0];

    // removes the first element
    arr.erase(arr.begin());
    cout << "\nThe first element is: " << arr[0];

    // inserts at the begining
    arr.emplace(arr.begin(), 5);
    cout << "\nThe first element is: " << arr[0];

    // inserts 20 at the end
    arr.emplace_back(20);
    n = arr.size();
    cout << "\nThe last element is: " << arr[n - 1];

    // erases the vector
    arr.clear();
    cout << "\nVector size after erase(): " << arr.size();

    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
  
    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
  
    // Swaps v1 and v2
    v1.swap(v2);
  
    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

    return 0;
}

/*
OUTPUT: 

The vector element are: 10 10 10 10 10 
The last element is: 15
The vector elements are: 10 10 10 10 10 
The first element is: 5
The first element is: 10
The first element is: 5
The last element is: 20
Vector size after erase(): 0

Vector 1: 1 2 
Vector 2: 3 4 
After Swap 
Vector 1: 3 4 
Vector 2: 1 2 
*/
