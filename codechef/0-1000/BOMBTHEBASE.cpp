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
        int n, b_strength; cin >> n >> b_strength;

        int ans = 0;

        for(int i = 1; i <= n; i++) {
            int a; cin >> a;
            if (a < b_strength)
                ans = i;
        }

        cout << ans << "\n";

    }

    return 0;
}
