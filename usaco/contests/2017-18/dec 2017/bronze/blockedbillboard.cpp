// author : gautam narayan

#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_POS = 2000;
bool visible[MAX_POS][MAX_POS];

int main() {

    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    for (int i = 0; i < 3; ++i) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        // make all the coordinates positive
        x1 += MAX_POS / 2;
        y1 += MAX_POS / 2;
        x2 += MAX_POS / 2;
        y2 += MAX_POS / 2;
        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                // when y is 0 or 1 it is a billboard
                // when y is 2 it is a billboard
                visible[x][y] = i < 2;
                // if (i<2) is true then visible[x][y] will be one
                // else it will be zero
            }
        }
    }

    // count square that have visible set to true
    int ans = 0;
    for (int x = 0; x < MAX_POS; x++) {
        for (int y = 0; y < MAX_POS; y++) {
            // if [x][y] is visible it will be 1; else it will be 0
            ans += visible[x][y];
        }
    }

    cout << ans << endl;


    return 0;
}
