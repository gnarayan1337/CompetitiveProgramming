// author : gautam narayan

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int N{}, K{}; cin>>N>>K;

    int lineLen = 0;

    for (int i = 0; i < N; i++) {
        string s;
        cin >>s;
        lineLen += s.length();
        if (lineLen <= K) {
            if (i > 0) cout << " ";
            cout << s;
        }
        else {
            cout << "\n" << s;
            lineLen = s.length();
        }
    }

    return 0;
}
