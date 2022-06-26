// author : gautam narayan

#include <iostream>
#include <vector>
#include <algorithm>
#define f first
#define s second
using namespace std;

int main() {

    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);

    int n{}; cin>>n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i].f >> arr[i].s;
    sort(arr.begin(), arr.end());

    vector<int> time(1000, 0);

    for (int i = 0; i < n; i++) {
        for (int j = arr[i].f; j < arr[i].s; j++) {
            time[j]++;
        }
        //replace(time.begin() + arr[i].f, time.begin() + arr[i].s + 1, 0, n);
    }
    // now we find the max time
    int maxTime = 0;

    for (int i = 0; i < n; i++) {
        for (int j = arr[i].f; j < arr[i].s; j++) {
            time[j]--;
        }

        int sum = 0;

        for (auto x : time) {
            if (x >= 1)
                sum++;
        }

        maxTime = max(sum, maxTime);
        // makes array normal again
        for (int j = arr[i].f; j < arr[i].s; j++) {
            time[j]++;
        }
    }

    cout << maxTime << "\n";

    return 0;
}
