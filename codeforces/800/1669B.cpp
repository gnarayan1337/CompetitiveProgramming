// author : gautam narayan

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t{}; cin >> t;
    while (t--) {
        int n{}; cin >> n;
        vector<int> arr{};
        for (int i = 0; i < n; i++) {
            int x{}; cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());

        int count{0};
        for (int i = 0; i < arr.size() - 1; i++) {
            count++;
            if (i == arr.size() - 2 and arr[i] == arr[i + 1])
                count++;
            if (count >= 3) {
                cout << arr[i] << endl;
                break;
            }
            if (arr[i] != arr[i+1])
                count = 0;
        }
        if (count < 3)
            cout << -1 << endl;
    }

    return 0;
}
