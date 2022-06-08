// author : gautam narayan

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n{}; cin>>n;
    vector<int> arr{0, 6, 28};
    if (n <= 3) {
        for (int i = 0; i < n; i++) 
            cout << arr[i] << endl;
    }

    else {
        long long x{16}, y{22}, sum{28};
        for (auto x : arr)
            cout << x << endl;
        for (int i = 0; i < n - 3; i++) {
            x += (30 + (12 * i));
            y += x;
            sum += y;
            cout << sum << endl;
        }
    }

    return 0;
}
