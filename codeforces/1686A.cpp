// author: gautam narayan

#include <bits/stdc++.h>
using namespace std;

double calcAvg(const vector<int>& arr, int i);
double calcAvg(const vector<int>& arr, int i) {
    int sum{0};
    for (auto x : arr)
        sum += x;
    return ((sum - arr[i]) / static_cast<double>((arr.size() - 1)));
}

int main() {

    int testcases{}; cin >> testcases;
    vector<string> output{};

    while (testcases--) {
        int n{}; cin >> n;
        vector<int> arr{};
        for (int i = 0; i < n; i++) {
            int x{}; cin >> x;
            arr.push_back(x);
        }

        bool lol = false;

        for (int i = 0; i < arr.size(); i++) {
            double avg{calcAvg(arr, i)};
            if (avg == arr[i]) {
                output.push_back("YES");
                lol = true;
                break;
            }
        }

        if (lol == false)
            output.push_back("NO");
    }

    for (auto x : output)
        cout << x << endl;

    return 0;
}
