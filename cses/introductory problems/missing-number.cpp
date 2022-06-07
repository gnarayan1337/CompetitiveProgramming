// author : gautam narayan

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n{}; cin>>n;
    vector<int> arr{};
    for (int i = 0; i < n - 1; i++) {
        int x{}; cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for (int i = 1; i < n + 1; i++) {
        if (arr[i - 1] != i) {
            cout << i;
            break;
        }
    }
    
    return 0;
}
