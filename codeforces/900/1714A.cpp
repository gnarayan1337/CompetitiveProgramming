// author : gautam narayan

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {

    int tc{}; cin >> tc;
    while(tc--) {
        int n{}, H{}, M{}; cin >> n >> H >> M;
        int real_sleep = (H * 60) + M;
        int diff = (24 * 60) - (60 * H) - M;
        int minimum = INT_MAX;
        bool lit = false;
        while(n--) {
            int h_i{}, m_i{}; cin >> h_i >> m_i;
            int real = (h_i * 60) + m_i;
            if (real == real_sleep) {
                lit = true;
            }
            if (real < real_sleep)
                real += diff;
            else
                real -= real_sleep;
            minimum = min(real, minimum);
        }
        if (lit)
            cout << "0 0" << "\n";
        else {
            cout << (minimum / 60) << " " << (minimum % 60) << "\n";
        }
    }

    return 0;
}
