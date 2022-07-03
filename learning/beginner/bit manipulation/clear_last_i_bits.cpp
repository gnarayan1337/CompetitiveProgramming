#include <iostream>
using namespace std;

/*
what we want to do

given:          10110101 | i = 5
indexes:           43210
mask:           11100000
and:            10100000

to get a mask if we have a number with 11111111 (-1, or ~0)
we left shift i to get zeroes at the end
for example if left shift i 4 times we will get
1111110000
*/

void clearLastIBits(int &n, int i) {
    // use -1 to get the 111111111 number
    // we then left shift i to get zeroes at the end
    int mask = (-1 << i);
    // then we and the given bits and the mask to get the final thing
    n = n & mask;
}

int main() {

    int n = 15;
    int i = 2;
    clearLastIBits(n, i);
    cout << n << endl;

    return 0;
}
