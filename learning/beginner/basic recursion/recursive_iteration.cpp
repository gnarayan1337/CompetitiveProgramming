// author : gautam narayan

#include <iostream>
#include <algorithm>

using namespace std;

void decreasing(int n) {
    // base case
    if (n == 0)
        return;

    // towards the base case
    cout << n << " ";
    decreasing(n - 1);
}

void increasing(int n) {
    // base case
    if (n == 0)
        return;

    increasing (n - 1);
    cout << n << " ";
}

int main() {
   cin.tie(nullptr) -> ios::sync_with_stdio(false);

    int n{};
    cin >> n;
    decreasing(n);
    cout << "\n";
    increasing(n);

    return 0;
}
