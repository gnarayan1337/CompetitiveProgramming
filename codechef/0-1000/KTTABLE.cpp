// author : gautam narayan

#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);

    int T{};
    cin >> T;
    while(T--) {
        int N{};
        cin >> N;
        vector<int> arrA{};
        for (int i = 0; i < N; i++) {
            int A{};
            cin >> A;
            arrA.push_back(A);
        }
        vector<int> arrB{};
        for (int i = 0; i < N; i++) {
            int B{};
            cin >> B;
            arrB.push_back(B);
        }

        int counter{};
        for (int i = 0; i < N; i++) {
            if (i == 0) {
                if (arrA[i] - 0 >= arrB[i])
                    counter++;
                continue;
            }
            if (arrA[i] - arrA[i - 1] >= arrB[i])
                counter++;
            else
                continue;
        }

        cout << counter << "\n";
    }

    return 0;
}
