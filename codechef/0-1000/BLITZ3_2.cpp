// author : gautam narayan

#include <iostream>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);

    int T{}; cin >> T;
    while(T--) {
        int N{}, A{}, B{};
        cin >> N >> A >> B;

        /*
         * 1) Calculate total time without increments
         * 360 - A - B
         * 2) Calculate increment time for both players
         * incA = ((N + 1) / 2) * 2, incB = (N / 2) * 2
         * 3) Add everything to find duration
         * duration = incA + incB + total time
         */

        int totalTime = 360 - A - B;
        int incA = ((N + 1) / 2) * 2, incB = (N / 2) * 2;
        int duration = incA + incB + totalTime;

        cout << duration << "\n";

    }

    return 0;
}
