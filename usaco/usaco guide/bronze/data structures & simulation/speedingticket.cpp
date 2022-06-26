// author : gautam narayan

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n{}, m{}; cin>>n>>m;
    vector<int> speed{}, bessie{};
    int speedCnt = 0, a = 0;
    for (int i = 0; i < n; i++) {
        int x{}, y{}; cin>>x>>y;
        for (int j = speedCnt; j < speedCnt + x; j++)
            speed.push_back(y);
        speedCnt += x;
    }

    int besCnt = 0;
    for (int i = 0; i < m; i++) {
        int x{}, y{}; cin>>x>>y;
        for (int j = besCnt; j < besCnt + x; j++)
            bessie.push_back(y);
        besCnt += x;
    }

    vector<int> amtOver{};
    for (int i = 0; i < 100; i++)
        amtOver.push_back(bessie[i] - speed[i]);

    if (*max_element(amtOver.begin(), amtOver.end()) < 0)
        cout << 0 << "\n";
    else
        cout << *max_element(amtOver.begin(), amtOver.end()) << "\n";

    return 0;
}
