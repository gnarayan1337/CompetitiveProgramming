// author : gautam narayan

#include <iostream>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);

    int T{};
    cin >> T;

    while(T--) {
        int n{};
        cin >> n;
        int counter{};
        while (n > 0) {
            if (n % 10 == 4) { counter++; }
            n /= 10;
        } 

        cout << counter << "\n";
    }

    return 0;
}
