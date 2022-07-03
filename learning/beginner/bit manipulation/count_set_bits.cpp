#include <iostream>
using namespace std;

/*
cout set bits in a number
9 -> 1001
set bits are the 1's in the number so 9 has 2 set bits

to find if the last digit in a bit is a 1 you can & the number with 1.
after we have determined if the last bit is 1 or zero we can right shift so the next digit is the last one
we can set a var: count += (n & 1), if the last bit is 1 it will increment by 1 if the last bit is zero it will increment by zero
the count variable will tell us the exact number of set bits in the number
*/

// faster better counting bits method, instead of iterating through every digit it just iterates a number of times = to the number of set bits
int count_bits_hack(int n) {

    int ans = 0;
    while(n > 0) {
        //removes the last set bit from the current number
        n = n & (n-1);
        ans++;
    }
    return ans;
}

int main() {

    int n = 9;
    int count {0};
    for (int i = 0; i < 4; i++) {
        // if last digit is 1 then count++ if not count does not increment
        count += (n & 1);
        // right shift the bit
        n = n >> 1;
    }
    cout << count;


    return 0;
}
