#include <iostream>
using namespace std;

/* 
You are given two 32-bit numbers, N and M, and two bit positions i and j.
Write a method to set all bits between i and j in N equal to M.
M (becomes a substring of N locationed at and starting at j)

Example:
N =             10000000000
M =             10101
i = 2, j = 6
output =        100[10101]00
index =             65432     
*/

void clearBitsInRange(int &n, int i, int j) {
    int a = (~0) << (j+1);
    int b = (1<<i) - 1;
    int mask = a|b;
    n = n & mask;
}

void replaceBits(int &n, int i, int j, int m) {
    clearBitsInRange(n, i, j);
    int mask = (m << i);
    n = n | mask;
}

int main() {

    //numbers
    int n = 15;
    int m = 2;
    //range
    int i = 1;
    int j = 3;

    replaceBits(n, i, j, m);
    cout << n << endl;

    /*
    indexes                 3210
    n is 15 :               1111
    replace [1,3] with m
    m is 2 :                010  

    clear n [1,3]:          0001
    left shift 2 by i :     0100
    or operation:           0101 : 5 
    */

    return 0;
}
