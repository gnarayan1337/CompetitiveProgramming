// author : Gautam Narayan
// date : 5 January 2022

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);

    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        string a, b; cin >> a >> b;

        for (int i = n - 1; i >= 0; i--) {
            if (a[i] == b[i]) {
                b[i] = '@';
            }
        }

        sort(b.begin(), b.end(), greater<int>());
        for (int i = n - 1; i >= 0; i--) {
            if (b[i] == '@') {
                b.pop_back();
                n--;
            }
            else
                break;
        }

        int ans = 1;
        char curr = b[0];
        for (int i = 0; i < n; i++) {
            if (curr == b[i])
                continue;
            else {
                ans++;
                curr = b[i];
            }
        }

        cout << ans << "\n";

    }

    return 0;
}
