// author : gautam narayan

/*
https://codeforces.com/contest/1691/problem/A
solution:   -sum of two odd numbers is even and sum of two even numbers is also even
            -we have to find the min number of elements to remove from the sequence such that the sum of every 2 consecutive elments is even
            -we find the number of odd elements and the number of even elements and return whichever value is smaller
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t{}; cin >> t;
    while (t--) {
        int n{}; cin >> n;
        vector<int> arr{};
        for (int i{}; i < n; ++i) {
            int x{}; cin >> x;
            arr.push_back(x);
        }
        int count_even{}, count_odd{};
        for (auto x : arr) {
            if (x % 2 == 0)
                count_even++;
            else
                count_odd++;
        }

        if (count_even > count_odd)
            cout << count_odd << endl;
        else
            cout << count_even << endl;
    }

    return 0;
}
