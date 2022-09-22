// author : gautam narayan

#include <iostream>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);

    int T{}; cin >> T;
    while(T--) {
        int N{}, K{};
        cin >> N >> K;

        if (K == 0) { // OFF
            if (N % 4 == 0)
                cout << "OFF" << "\n";
            else
                cout << "ON" << "\n";
        }
        else { // ON
            if (N % 4 == 0)
                cout << "ON" << "\n";
            else
                cout << "AMBIGUOUS" << "\n";
        }
    }

    return 0;
}
