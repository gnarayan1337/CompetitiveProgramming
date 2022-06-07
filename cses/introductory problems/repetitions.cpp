// author : gautam narayan
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    string s{}; cin>>s;
    int local_max{}, global_max{};
    
    if (s.size() > 1) {
        for (int i = 0; i < s.size() - 1; i++) {
            local_max++;
            if (i == s.size() - 2 && s[i] == s[i+1])
                local_max++;
            global_max = max(local_max, global_max);
            if (s[i] != s[i + 1])
                local_max = 0;
        }
    }
    else
        global_max = 1;
 
    cout << global_max;
 
    return 0;
}
