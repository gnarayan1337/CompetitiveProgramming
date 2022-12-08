// author : Gautam Narayan
// date : 1 December 2022

#include <iostream>

using namespace std;

int fast_power(int a, int n) {

    // base case
    if (n == 0)
        return 1;

    // recursive case
    int subProb = fast_power(a, n / 2);
    int subProbSq = subProb * subProb;
    if (n & 1)
        return a * subProbSq;
    return subProbSq;
}

int main() {
    cin.tie(nullptr) -> ios::sync_with_stdio(false);

    int a{}, n{};
    cin >> a >> n;
    cout << fast_power(a, n) << "\n";

    return 0;
}
