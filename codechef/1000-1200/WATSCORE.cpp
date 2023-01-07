// author : Gautam Narayan
// date : 7 January 2022

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    cin.tie(nullptr) -> ios::sync_with_stdio(false);

    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        long long ans = 0;
        vector<int> arr(8);
        // first part will be problem frequency, and second part will be current score

        for (int i = 0; i < n; i++) {
            int p, s; cin >> p >> s;
            if (p > 8)
                continue;
            else
                arr[p - 1] = max(arr[p - 1], s);
        }

        for (auto x : arr)
            ans += x;

        cout << ans << "\n";
    }

    return 0;
}
