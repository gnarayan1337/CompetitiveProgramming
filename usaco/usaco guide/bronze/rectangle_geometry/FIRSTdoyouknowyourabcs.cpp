// author : gautam narayan
// FIRST PROBLEM SOLVED

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<long long> arr{};
    for (int i = 0; i < 7; i++) {
        long long x{}; cin>>x;
        arr.push_back(x);
    }

    long long maxE = *max_element(arr.begin(), arr.end());
    long long a = *min_element(arr.begin(), arr.end());

    // remove (a+b+c)
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == maxE) {
            arr.erase(arr.begin() + i);
            break;
        }
    }

    // remove a
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == a) {
            arr.erase(arr.begin() + i);
            break;
        }
    }

    long long b = *min_element(arr.begin(), arr.end());

    // remove b
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == b) {
            arr.erase(arr.begin() + i);
            break;
        }
    }

    //remove a + b
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == (a + b)) {
            arr.erase(arr.begin() + i);
            break;
        }
    }

    long long c = *min_element(arr.begin(), arr.end());

    cout << a << " " << b << " " << c;

    return 0;
}
