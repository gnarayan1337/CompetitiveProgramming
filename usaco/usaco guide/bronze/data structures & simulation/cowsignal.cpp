// author : gautam narayan
// O(N^4) LOL

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int M{}, N{}, K{}; cin>>M>>N>>K;
    vector<string> arr{};
    for (int i = 0; i < M; i++) {
        string s{}; cin>>s;
        arr.push_back(s);
    }

    for (int i = 0; i < M; i++) {
        for (int z = 0; z < K; z++) {
            for (int j = 0; j < N; j++) {
                for (int k = 0; k < K; k++) {
                    cout << arr[i].at(j);
                }
            }
            cout << endl;
        }
    }

    return 0;
}
