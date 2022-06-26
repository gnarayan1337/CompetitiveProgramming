// author : gautam narayan

// approach: we slowly build the string and remove substrings accordingly

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);

     string s, t, ss{};cin>>s>>t;
     for (int i = 0; i < s.size(); i++) {
         ss+=s[i];
         if (ss.size() >= t.size()) {
             string sub = ss.substr(ss.length() - t.length());
             if (sub == t)
                 ss.resize(ss.size() - t.size());
         }
     }

     cout << ss << "\n";

    return 0;
}
