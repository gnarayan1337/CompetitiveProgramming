#include <iostream>
using namespace std;



/*                               *
bit:                        111101010
clear the bit:              111100010
                                 *
or (if we want to set 1):   000001000
or (if we want to set 0):   000000000
--------------------------------------
updated bit:                right here
*/

void clearIthBit(int &n, int i) {
    int mask = ~(1 << i);
    n = n & mask;
} 

void updateIthBit(int n, int i, int v) {
    clearIthBit(n, i);
    int mask = (v << i);
    n = (n | mask);
}

int main () {

    int n = 13;
    int i;
    cin >> i;

    //ending number is what bit you want to change
    updateIthBit(n, i, 1);
    cout << n << endl;
    return 0;
}
