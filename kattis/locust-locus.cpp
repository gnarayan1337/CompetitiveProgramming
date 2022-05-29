// author: gautam narayan

#include <bits/stdc++.h>
using namespace std;

int lcm (int x, int y);
int lcm (int x, int y) {
    int mult{1};
    int z{x};
    while (x % y != 0) {
        x = z;
        x *= mult;
        mult++;
    }
    return x;
}

int main() {

    int k{};
    cin >> k;
    vector<int> arr{};
    while(k--) {
        int year{}, cycleX{}, cycleY{}; 
        cin >> year >> cycleX >> cycleY; 
        int add = lcm(cycleX, cycleY);
        arr.push_back(year + add);
    }

    int min = arr.at(0);
    for (auto x : arr) {
       if (x < min)
           min = x; 
    }

    cout << min << endl;

    return 0;
}
