// author : gautam narayan

/*
solution:   -we take the lower bound of what the index could possibly be
            -if the second letter is greater than the first we print the ASCII difference between the second letter and 'a' MINUS 1
            -if the second letter is less than the first we print the ASCII difference between the second letter and the letter 'a'
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int testcases{}; cin >> testcases;
    while (testcases--) {
        string s; cin >> s;
        int lower_bound{}, higher_bound{};
        higher_bound = ((static_cast<int>(s[0]) - static_cast<int>('a')) + 1) * 25;
        lower_bound = higher_bound - 24;
        if (s[1] > s[0]) {
            cout << lower_bound + ((static_cast<int>(s[1]) - static_cast<int>('a')) - 1) << endl;
        }
        else 
            cout << lower_bound + (static_cast<int>(s[1]) - static_cast<int>('a')) << endl;
    }

    return 0;
}
