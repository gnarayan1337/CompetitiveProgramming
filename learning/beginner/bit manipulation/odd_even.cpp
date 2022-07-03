#include <iostream>
using namespace std;

// if the last bit of a number is 1 then it is odd

int main() {

    int x;
    cin >> x;

    // one is an odd number so its last bit is 1, so we compare our cin to 1 to check the last bit of the number

    if (x & 1) // will be true if the two last bits are both 1
        cout << "Odd";
    else 
        cout << "Even";
    
    return 0;
}
