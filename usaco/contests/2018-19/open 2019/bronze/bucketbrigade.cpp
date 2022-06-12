// author : gautam narayan

#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    // coordinates of barn, rock, and lake
    int barn_x = 0, barn_y = 0, rock_x = 0, rock_y = 0, lake_x = 0, lake_y = 0;
    for (int x = 0; x < 10; x++) {
        string row;
        cin >> row;
        // for each row loop through all the colums and check if char is equal to b, r, or l
        for (int y = 0; y < 10; y++) {
            if (row[y] == 'B') {
                barn_x = x;
                barn_y = y;
            }
            if (row[y] == 'R') {
                rock_x = x;
                rock_y = y;
            }
            if (row[y] == 'L') {
                lake_x = x;
                lake_y = y;
            }
        }
    }
    // initial distance without accounting for the rock
    int cows = abs(barn_x - lake_x) + abs(barn_y - lake_y) - 1;
    // two special cases: 
    //      if the barn, rock, and lake are in the same row and the rock is between the barn and the lake
    //      if the barn, rock, and lake are in the same column and the rock is between the barn and the lake

    if (barn_x == lake_x and lake_x == rock_x and ((lake_y < rock_y and rock_y < barn_y) || (barn_y < rock_y and rock_y < lake_y))) 
        cows+=2;
    else if (barn_y == lake_y and lake_y == rock_y and ((lake_x > rock_x and rock_x > barn_x) || (lake_x < rock_x and rock_x < barn_x)))
        cows+=2;

    cout << cows << endl;

    return 0;
}
