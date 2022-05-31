// author : gautam narayan
// REDEMPTION - done in less than 27 minutes

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t{}; cin >> t;
    while (t--) {
        int n{}; cin >> n;
        vector<int> arr{};
        for (int i = 0; i < n; i++) {
            int x{}; cin >> x;
            arr.push_back(x);
        }
        
        bool isAllEven = true;
        bool isAllOdd = true;

        bool isOddEven = false;
        if (arr[1] % 2 == 0)
            isOddEven = true;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                continue;
            if (isOddEven == true) {
                if (arr[i] % 2 != 0) {
                    isAllOdd = false;
                    break;
                }
                else
                    continue;
            }
            else {
                if (arr[i] % 2 == 0) {
                    isAllOdd = false;
                    break; }
            }
        }

        bool isEvenEven = false;
        if (arr[0] % 2 == 0)
            isEvenEven = true; 

        for (int i = 0; i < n; i++) {
            if (i % 2 != 0)
                continue;
            if (isEvenEven == true) {
                if (arr[i] % 2 != 0) {
                    isAllEven = false;
                    break;
                }
                else 
                    continue;
            }
            else {
                if (arr[i] % 2 == 0) {
                    isAllEven = false;
                    break;
                }
            }
        }

        if (isAllEven == true and isAllOdd == true) {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
