// author : Gautam Narayan
// date : 30 November 2022

#include <iostream>
#include <vector>

using namespace std;

void dec(int n);
void inc(int n);

void dec(int n) {

    // base case
    if (n == 0)
        return;

    // recursive case
    cout << n << " ";
    dec(n - 1);
}

void inc(int n) {

    // base case
    if (n == 0)
        return;

    // recursive case
    inc(n - 1);
    cout << n << " ";
}

int main() {
    cin.tie(nullptr) -> ios::sync_with_stdio(false);

    int n{};
    cin >> n;
    dec(n);
    inc(n);

    return 0;
}
