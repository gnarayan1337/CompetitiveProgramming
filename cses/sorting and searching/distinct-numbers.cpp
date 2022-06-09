// author : gautam narayan

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n{}; cin>>n;
    vector<int> arr{};
    for (int i = 0; i < n; i++) {
        int x{}; cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    int count = 1;
    for (int i = 1; i < arr.size() - 1; i++) {
        if (arr[i] == arr[i+1])
            continue;
        else 
            count++;
    }
    if (arr[arr.size() - 1] != arr[arr.size() - 2])
        count++;

    cout << count << endl;

    return 0;
}
