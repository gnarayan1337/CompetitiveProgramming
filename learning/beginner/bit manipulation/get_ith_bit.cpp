#include <iostream>
using namespace std;

// get ith bit
 
int getIthBit(int n, int i) {
    int mask = (1 << i);
    // if it gives a result > 0 return 1 else return 0
    return (n & mask) > 0 ? 1 : 0;
}

int main() {

    int n = 5;
    int i;
    cin >> i;

    cout << getIthBit(n, i) << endl;

    return 0;
}

/*

5:    000101
mask: 000100 (1 left shift i times)
& ----------------
      000100

if the number is > 0 it is 1
if the number isnt > 0 it is 0
*/
