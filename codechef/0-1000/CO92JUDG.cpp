// author : Gautam Narayan
// date : 4 January 2022

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(nullptr)->ios::sync_with_stdio(false);

    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;

        vector<int> alice(n), bob(n);
        int suma = 0, sumb = 0;

        for(auto &x : alice) {cin >> x; suma += x;}
        for(auto &x : bob) {cin >> x; sumb += x;}

        sort(alice.begin(), alice.end());
        sort(bob.begin(), bob.end());

        suma -= alice[n - 1];
        sumb -= bob[n - 1];

        if (suma == sumb)
            cout << "Draw" << "\n";
        else if (suma < sumb)
            cout << "Alice" << "\n";
        else if (suma > sumb)
            cout << "Bob" << "\n";
    }

    return 0;
}
