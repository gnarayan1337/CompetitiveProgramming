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
        int x1, x2; cin >> x1 >> x2;
        if (x1 == x2)
            cout << "YES" << "\n";
        else if (x2 > x1)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
    }

    return 0;
}
