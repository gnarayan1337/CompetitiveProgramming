// author : gautam narayan

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(nullptr) -> ios::sync_with_stdio(false);

    int T{}; cin >> T;
    while(T--) {
        double T1{}, T2{}, R1{}, R2{};
        cin >> T1 >> T2 >> R1 >> R2;

        if ((pow(T1, 2) / pow(R1, 3)) == (pow(T2, 2) / pow(R2, 3)))
            cout << "Yes" << "\n";
        else
            cout << "No" << "\n";
    }

    return 0;
}
