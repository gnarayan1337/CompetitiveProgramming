// author : gautam narayan

#include <bits/stdc++.h>
using namespace std;

int main() {

    string howl; cin >> howl;
    int num = howl.size();
    string result {};
    while (num--) {
        result = result.append("A");
        result = result.append("W");
    }
    result = result.append("H");
    result = result.append("O");

    cout << result;

    return 0;
}
