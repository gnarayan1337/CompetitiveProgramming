#include <iostream>
using namespace std;

/*
clear second bit

original number:    1101
mask:               1011 is a result of ~(1 << i)                   
and:                1001
*/

void clearIthBit(int &n, int i) {
    int mask = ~(1 << i);
    n = n & mask;
} 

int main() {

    int n = 13;
    // position of the bit is i
    int i ;
    cin >> i;

    clearIthBit(n, i);
    cout << n;

    return 0;
}
