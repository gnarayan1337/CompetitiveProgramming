// author : Gautam Narayan
// date : 5 January 2022

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);

    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;

        vector<int> arr(n);

        for (auto &x : arr)
            cin >> x;

        int k; cin >> k;
        k--;
        int init_j = arr[k];

        sort(arr.begin(), arr.end());

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == init_j) {
                ans = i + 1;
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
