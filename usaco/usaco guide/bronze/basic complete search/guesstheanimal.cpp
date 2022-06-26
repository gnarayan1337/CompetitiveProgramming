

// author : gautam narayan

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    freopen("guess.in", "r", stdin);
    freopen("guess.out", "w", stdout);

    // solution: we have to find the two animals that have the most in common with each other and then add one to that

    int n{}; cin>>n;
    int kk{};
    vector<vector<string>> arr(n);
    for (int i = 0; i < n; i++) {
        string s{}; cin >> s;
        int k{}; cin>>k;
        kk = max(k, kk);
        for (int j = 0; j < k; j++) {
            string x{}; cin>>x;
            arr[i].push_back(x);
        }
    }

    int greatest_common = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int common = 0;
            for (auto char1 : arr[i]) {
                for (auto char2 : arr[j]) {
                    if (char1 == char2) {
                        common++;
                        break;
                    }
                }
            }
            greatest_common = max(greatest_common, common);
        }
    }

    cout << greatest_common + 1;

    return 0;
}
