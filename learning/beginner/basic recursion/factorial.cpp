// author : gautam narayan

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int factorial(int n) {
    // base case
    if (n == 0) {
        return 1;
    }

    // recursive case
    int ans = n * factorial(n - 1);
    return ans;
}

int main() {
   cin.tie(nullptr) -> ios::sync_with_stdio(false);

   int n;
   cin >> n;
   cout << factorial(n) << "\n";

    return 0;
}
