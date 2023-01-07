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
        int n, k; cin >> n >> k;
        int ans = 0;
        int arr[n];
        for (int i = 0; i < n; i++) {cin >> arr[i];}
        if (n < 2) {
            ans = arr[0];
            continue;
        }
        for (int i = 0; i < n - (k - 1); i++) {
            int ans2 = 0;
            for (int j = i; j < i + k; j++) {
                ans2 += arr[j];
            }
            ans = max(ans2, ans);
        }

        cout << ans << "\n";

    }

    return 0;
}
