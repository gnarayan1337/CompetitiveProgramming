// author : Gautam Narayan
// date : 4 January 2022

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);

    int tc{}; cin >> tc;
    while(tc--) {
        int a, b, c; cin >> a >> b >> c;
        if ((a + b + c) % 2 != 0) {
            cout << "NO" << "\n";
            continue;
        }
        else {
            vector<int> arr{a, b, c};
            sort(arr.begin(), arr.end());
            if ((arr[0] + arr[1]) == arr[2]) {
                cout << "YES" << "\n";
                continue;
            }
            else
                cout << "NO" << "\n";
        }
    }

    return 0;
}
