// author : gautam narayan
 
#include <bits/stdc++.h>
#define test int tt{}; cin >> tt; while(tt--) {
using namespace std;
 
 
 
int main() {
 
    int tt{}; cin >> tt;
    while (tt--) {
        vector<int> food{};
        for (int i = 0; i < 5; i++) { 
            int temp{}; cin >> temp;
            food.push_back(temp);
        }
        // check dogs
        if (food[0] < food[3]) {
            if (food[0] + food[2] < food[3]) {
                cout << "NO" << endl;
                continue;
            }
            else if (food[0] + food[2] >= food[3]) {
                food[2] -= (food[3] - food[0]);
            }
        }
        if (food[1] < food[4]) {
            if (food[1] + food[2] < food[4]) {
                cout << "NO" << endl;
                continue;
            }
            else if (food[1] + food[2] >= food[4]) {
                food[2] -= (food[4] - food[1]);
                if (food[2] < 0) {
                    cout << "NO" << endl;
                    continue;
                }
            }
        }
        cout << "YES" << endl;
    }
 
    return 0;
}
