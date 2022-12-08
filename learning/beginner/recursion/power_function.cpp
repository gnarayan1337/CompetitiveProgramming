// author : Gautam Narayan
// date : 1 December 2022

#include <iostream>
#include <vector>

using namespace std;

int power(int a, int n) {

    // base case
    if (n == 0)
        return 1;

    // recursive case
    return a * power(a, n - 1);
}

int main() {
    cin.tie(nullptr) -> ios::sync_with_stdio(false);

    int a{}, n{};
    cin >> a >> n;
    cout << power(a, n) << "\n";

    return 0;
}
