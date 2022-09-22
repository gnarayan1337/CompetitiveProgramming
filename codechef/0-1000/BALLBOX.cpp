// author : gautam narayan

#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);


    int T{}; cin >> T;
    while(T--) {
        int N{}, K{};
        cin >> N >> K;

        // if N is less than the sum of all the numbers 1 to K
        if (N >= (K * (K + 1) / 2))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}
