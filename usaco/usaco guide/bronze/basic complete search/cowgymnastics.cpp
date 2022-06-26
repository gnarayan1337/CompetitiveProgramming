// author : gautam narayan

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);

    int n, k; cin>>k>>n;
    vector<pair<int, int>> arr{};
    vector<vector<int>> vec (k);

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            int x{}; cin>>x;
            vec[i].push_back(x);
        }
    }

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n - 1; j++) {
            for (int d = j + 1; d < n; d++) {
                arr.push_back(make_pair(vec[i][j], vec[i][d]));
            }
        }
    }

    int bigCount = 0;
    for (int i = 0; i < (arr.size() / k); i++) {
        int count = 1;
        for (int j = arr.size() / k; j < arr.size(); j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == k)
            bigCount++;
    }

    cout << bigCount << "\n";

    return 0;
}
