// author : Gautam Narayan
// date : 7 January 2022

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(nullptr) -> ios::sync_with_stdio(false);

    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        long long ans = 0, curr; cin >> curr;
        for (int i = 0; i < n - 1; i++) {
            int s; cin >> s;
            ans += (abs(curr - s) - 1);
            curr = s;
        }

        cout << ans << "\n";
    }

    return 0;
}
