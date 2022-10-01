// author : gautam narayan

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int check(vector<int> arr, int D);
int check(vector<int> arr, int D) {
    double left = (static_cast<double>(D + 1) / static_cast<double>(arr[arr.size() - 1]));
    //cout << "left: " << left;
    int left2 = ceil(left);
    if (left2 * arr[arr.size() - 1] < D + 1)
        left2 = INT_MAX;
    return left2;
}

int main() {
    cin.tie(nullptr) -> ios::sync_with_stdio(false);

    int N{}, D{}; cin >> N >> D; // number of candidate players & power of enemy team, respectively
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    int wins{};
    int curr = check(arr, D);
    while(curr <= arr.size() && arr.size() > 0) {
        curr = check(arr, D);
        arr.pop_back();
        arr.erase(arr.begin(), arr.begin() + curr - 1);
        /*
        for (int i = 0; i < curr - 1; i++) {
            arr.erase(arr.begin());
        }
         */
        wins++;
    }

    cout << wins << "\n";

    return 0;
}
