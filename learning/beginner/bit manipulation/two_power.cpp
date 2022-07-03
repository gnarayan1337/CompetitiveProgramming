#include <iostream>
using namespace std;

/*
power of 2

N 16 ->              10000
N-1 15 ->            01111
when you and them:   00000
if (N & (N - 1)) == 0 then N is a power of 2

*/


int main() {

    int n;
    cin >> n;

    if ((n & (n-1))==0)
        cout << "Power of two";
    else    
        cout << "not a power of two";
    

    return 0;
}
