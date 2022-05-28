// author: gautam narayan

#include <bits/stdc++.h>
using namespace std;

long long max_function(long long x);
long long min_function(long long x);

long long max_function(long long x) {
    long long max {0};
    long long max_counter {0};
    if (x % 4 == 0) {
        max = (x / 4);
        return max;
    }
    else {
        while (x % 4 != 0) {
            x -= 6;
            max_counter++;
        }
        max = (max_counter + (x / 4));
        return max;
    }
}

long long min_function(long long x) {
    long long min {0};
    long long min_counter {0};
    //check if x >= 6 beforehand
    if (x % 6 == 0) {
        min = (x / 6);
        return min;
    }
    else {
        while (x % 6 != 0) {
            x -= 4;
            min_counter++;
        }
        min = (min_counter + (x / 6));
        return min;
    }
}

int main() {

    long long testcases{}, min_buses{}, max_buses{};
    cin >> testcases;
    vector<long long> arr{};

    for (int i = 0; i < testcases; i++) {
        long long n{};
        cin >> n;
        arr.push_back(n);
    }

    for (long long x : arr) {
        if (x % 2 != 0 || x < 4) {
            cout << "-1\n";
            continue;
        }

        min_buses = min_function(x);
        if (x >= 6)
            max_buses = max_function(x);
        else
            max_buses = min_buses;
        
        cout << min_buses << " " << max_buses << endl;
    }

    return 0;
}
