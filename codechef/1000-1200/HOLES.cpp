// author : Gautam Narayan
// date : 5 January 2022

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);

    int tc; cin >> tc;
    while(tc--) {
        string str; cin >> str;
        int ans = 0;
        for (auto x : str) {
            if (x == 'A' || x == 'D' || x == 'O' || x == 'P' || x == 'R' || x == 'Q')
                ans++;
            else if (x == 'B')
                ans+=2;
        }

        cout << ans << "\n";
    }

    return 0;
}
