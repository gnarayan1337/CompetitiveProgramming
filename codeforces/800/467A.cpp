// author: gautam narayan

#include <bits/stdc++.h>
using namespace std;

int main() {

    int num_rooms {}, counter {0};
    cin >> num_rooms; 

    for (int i = 0; i < num_rooms; i++) {
        int x{}, y{};
        cin >> x >> y;
        if (y >= (x + 2))
            counter ++;
    }

    cout << counter;

    return 0;
}
