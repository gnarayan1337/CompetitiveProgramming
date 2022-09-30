// author : gautam narayan

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(nullptr) -> ios::sync_with_stdio(false);

    int tc{}; cin >> tc;
    while(tc--) {
        int n{}, x{}, y{};
        cin >> n >> x >> y;

        // we can start by ruling impossible games
        if (x == y) {
            cout << -1 << "\n";
            continue;
        }
        if (max(x, y) > 0 and min(x, y) > 0) {
            cout << -1 << "\n";
            continue;
        }
        else if (min(x, y) == 0 and ((n - 1) % max(x, y) != 0)) {
            cout << -1 << "\n";
            continue;
        }

        // if max(x, y) is > 0 and min(x, y) == 0 we can do a simple algorithm
        if (max(x, y) == (n - 1)) {
            for (int i = 0; i < max(x, y); i++) { cout << 1 << " "; }
        }
        else if ((n - 1) % max(x, y) == 0) {
            int counter = 2;
            for (int i = 0; i < ((n - 1) / max(x, y)); i++) {
                for (int i = 0; i < max(x, y); i++) {
                    cout << counter << " ";
                }
                counter += max(x, y);
            }
        }

        cout << "\n";
    }
    return 0;
}
