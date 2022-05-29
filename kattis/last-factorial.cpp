// author: gautam narayan

#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    // base case
    if (n == 0)
        return 1;
    // rec case
    return n * factorial(n - 1);
}

int main () {

    int testcases{};
    cin >> testcases;
    vector<int> output{};

    while (testcases--) {
        int n{};
        cin >> n;
        n = factorial(n);
        output.push_back(n % 10);
    }

    for (auto x : output)
        cout << x << endl;

    return 0;
}
