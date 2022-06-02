// author : gautam narayan

#include <bits/stdc++.h>
using namespace std;

int main() {

    int tt{}; cin >> tt;
    while(tt--) {
        string s2{}; cin >> s2;
        if (s2.length() < 2) {
            cout << "NO" << endl;
            continue;
        }
        int a = 0, b = 0;
        for (int i = 0; i < s2.size(); i++) {
            if (s2.at(i) == 'A')
                a++;
            else
                b++;
            if (a < b)
                break;
        } 
        if ((a < b) || (a == 0) || (b == 0) || s2.at(0) == 'B' || s2.at(s2.size() - 1) == 'A') 
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }

    return 0;
}
