// author : gautam narayan

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {

    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);

    int n{}; cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin>>arr[i];

    // count the cows
    int numCows{};
    for (auto x : arr)
        numCows += x;

    for (int i = 0; i < n - 1; i++)
        arr.push_back(arr[i]);

    // now that we have our array, let's implement our algorithm
    vector<int> possible{};

    int runCnt{}, cowTraveled{};
    for (int i = 0; i < n; i++) {
        cowTraveled = 0;
        runCnt = numCows;
        for (int j = i; j < i+n; j++) {
            if (j == i) {
                runCnt -= arr[j];
                continue;
            }
            cowTraveled += runCnt;
            runCnt -= arr[j];
        }
        possible.push_back(cowTraveled);
    }

    int min = INT_MAX;
    for (auto x : possible) {
        if (x < min)
            min = x;
    }

    cout << min << "\n";

    return 0;
}
