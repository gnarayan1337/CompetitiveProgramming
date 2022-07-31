#include <iostream>
using namespace std;

void dec(int n) {
    // base case
    if (n == 0) {
        return;
    }

    // rec case
    cout << n << ", ";
    dec(n - 1);
}

void inc(int n) {
    // base case
    if (n == 0) {
        return;
    }

    // rec case
    // for the increasing function the only thing that changes is the order, the function call comes before the cout instead of after
    inc(n - 1);
    cout << n << ", ";
}

int main() {

    int n{}; cin>>n;
    dec(n);
    cout << "\n";
    inc(n);

    return 0;
}
