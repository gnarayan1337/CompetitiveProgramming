// author : Gautam Narayan
// date : 30 November 2022

#include <iostream>

using namespace std;

int fib(int n) {
    if (n == 0 || n == 1)
        return n;
    int f1 = fib(n - 1);
    int f2 = fib(n - 2);
    return f1 + f2;
    // I could have also written this like: return fib(n - 1) + fib(n - 2);
}
int main() {
    cin.tie(nullptr) -> ios::sync_with_stdio(false);

    int n{};
    cin >> n;
    cout << fib(n) << "\n";

    return 0;
}
