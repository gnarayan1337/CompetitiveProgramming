#include <iostream>
using namespace std;

/*
given:      111010101110 
mask:       111100000111
range:          j   i

how to make mask
a: all 1s left shift j + 1 111100000000 (~0 << (j+1))
b:                         000000000111 (1 << i) - 1   
mask a|b:                  111100000111
given & mask:              111000000110        
*/

void clearBitsInRange(int &n, int i, int j) {
    int a = (~0) << (j+1);
    int b = (1 << i) - 1;
    int mask = a|b; 
    n = n & mask;
}


int main() {
    //num is 31
    int n = 31;
    //clear bits in range (1-3)
    int i = 1;
    int j = 3;

    clearBitsInRange(n, i, j);
    cout << n << endl;

    return 0;
}
