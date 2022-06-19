// author : gautam narayan

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

    int n{}, m{}; cin>>n>>m;
    vector<string> spotty, plain;
    for (int i = 0; i < n; i++) {
        string temp{}; cin>>temp;
        spotty.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        string temp{}; cin>>temp;
        plain.push_back(temp);
    }

    /*
     * 1) we will look at each string at each position in the SPOTTY cows and store used letters in a temporary vector of chars; set count = m;
     * 2) we will then compare the chars in that vector to the strings in the PLAIN cows and if there are no matching letters then continue, else count--;
     */

    int count = m;
    bool hi = true;
    for (int i = 0; i < m; i++) {
        vector<char> temp{};
        for (int j = 0; j < n; j++)
            temp.push_back(spotty[j][i]);

        vector<char> temp2{};
        for (int j = 0; j < n; j++)
            temp2.push_back(plain[j][i]);

        for (int j = 0; j < temp.size(); j++) {
            for (int k = 0; k < temp.size(); k++) {
                if (temp[j] == temp2[k]) {
                    count--;
                    hi = false;
                    break;
                }
            }
            if (hi == false)
                break;
        }
        hi = true;
    }

    cout << count << "\n";


    return 0;
}
