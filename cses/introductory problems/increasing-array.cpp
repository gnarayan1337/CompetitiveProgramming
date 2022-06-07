// author : gautam narayan

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n{}; cin>>n;
    vector<long long> arr{};
    for (int i = 0; i < n; i++) {
        long long x{}; cin>>x;
        arr.push_back(x);
    }
    long long counter = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i]) {
            counter+= (arr[i] - arr[i+1]);
            arr[i+1] += (arr[i] - arr[i+1]);
        }
    }

    cout << endl << counter++;

    return 0;
}
