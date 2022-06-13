// author : gautam narayan

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    vector<int> arr{};
    int N{}; cin>>N;
    for (int i = 0; i < N; i++) {
        int a{}; cin>>a;
        arr.push_back(a-1);
    }
    vector<int> ids{};
    for (int i = 0; i < N; i++) {
        int id{}; cin>>id;
        ids.push_back(id);
    }
    vector<int> ans(N);
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < N; i++) {
            ans[i] = ids[arr[i]];
        }
        for (int i = 0; i < N; i++) {
            ids[i] = ans[i];
        }
    }

    for (auto x : ans)
        cout << x << endl;

    return 0;
}
