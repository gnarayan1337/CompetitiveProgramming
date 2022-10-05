// author : gautam narayan
 
#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    cin.tie(nullptr) -> ios::sync_with_stdio(false);
 
    int tc{}; cin >> tc;
    while (tc--) {
        long long a{}, b{}, c{}, d{};
        cin >> a >> b >> c >> d;
        long long x = (a * d);
        long long y = (c * b);
 
        if (x == y) {
            cout << "0\n";
            continue;
        }
        if (y != 0 and x % y == 0 or x != 0 and y % x == 0 ) {
            cout << "1\n";
            continue;
        }
        else
            cout << "2\n";
    }
 
 
    return 0;
}
