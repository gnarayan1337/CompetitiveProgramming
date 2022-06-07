// author : gautam narayan

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n{}; cin>>n;
    vector<int> arr{};
    for (int i = 1; i <= n; i++) 
        arr.push_back(i);

    if (arr.size() <= 3 and arr.size() > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    else if (arr.size() == 1)
        cout << 1 << endl;

    if (n % 2 != 0) {
        cout << arr[n / 2] << " ";
        arr.erase(arr.begin() + (n / 2));
        for(int i = 0; i < (n / 2); i++) {
            if (arr[i] % 2 != 0) {
                swap(arr[i], arr[(arr.size() - 1) - i]);
            }
        }
        for (auto x : arr)
            cout << x << " ";
    }

    else if (n % 2 == 0) {
        vector<int> later{arr[n / 2], arr[(n / 2) - 1]};
        arr.erase(arr.begin() + (n / 2)); arr.erase(arr.begin() + (n / 2) - 1);
        for (int i = 0; i < arr.size() / 2; i++) {
            if (i % 2 == 0)
                swap(arr[i], arr[(arr.size() - 1) - i]);
        }
        cout << later[1] << " ";
        for (auto x : arr)
            cout << x << " ";
        cout << later[0] << " "; 
    }

    return 0;
}
