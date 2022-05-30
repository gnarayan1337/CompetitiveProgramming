// author : gautam narayan

#include <bits/stdc++.h>
using namespace std;

int main() {

    int testcases{}; cin >> testcases;
    while (testcases--) {
        int l1{}, r1{}, l2{}, r2{}; cin >> l1 >> r1 >> l2 >> r2;
        if (l2 <= r1 && l1 <= r2) {
            if (l2 > l1) cout << l2 << endl;
            else cout << l1 << endl;
        }
        else
            cout << (l1 + l2) << endl;
    }

    return 0;
}
