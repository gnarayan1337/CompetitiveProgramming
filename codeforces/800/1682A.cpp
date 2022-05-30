// author : gautam narayan

#include <bits/stdc++.h>
using namespace std;

int main() {

    int testcases{}; cin >> testcases;
    while (testcases--) {
        int n{}; cin >> n;
        string s{}; cin >> s;
        int index = (n / 2), count = 0;

        // check chars above index
        for (int i = index; i < n; i++) {
            if (s[i] == s[i + 1])
                count++;
            else
                break;
        }

        // check chars below index
        for (int i = index; i >= 0; i--) {
            if (s[i] == s[i - 1])
                count++;
            else 
                break;
        }
        cout << count + 1 << endl;
    }

    return 0;
}
