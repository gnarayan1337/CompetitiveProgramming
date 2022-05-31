// author : gautam narayan

/*
We are given an integer
-Alice MUST swap any two digits of the integer that are on different positions
-Bob will always remove the last digit of integer
-Game ends when there is 1 digit left in the integer

Objective: Find smallest integer Alice can get in the end

Solution:   If the integer has more than 2 digits simply print the smallest digit in the integer
            If the integer has 2 digits or less, simply print the last digit of the integer 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int testcases{}; cin >> testcases;
    while (testcases--) {
        int n{}; cin >> n;
        vector<int> arr{};
        if (n > 100) {
            while (n > 0) {
                arr.push_back(n % 10);
                n /= 10;
            }
            sort(arr.begin(), arr.end());
            cout << arr[0] << endl;
        }
        else
            cout <<  (n % 10) << endl;
    }   

    return 0;
}
