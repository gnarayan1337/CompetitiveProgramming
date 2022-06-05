// author : gautam narayan

#include <bits/stdc++.h>
using namespace std;

int main() {

    int tt{}; cin>>tt;
    while (tt--) {
        vector<int> alice{}, bob{};
        int a{}, b{};
        cin >> a;
        for (int i = 0; i < a; i++) {
            int x{}; cin >> x;
            alice.push_back(x);
        }
        cin >> b;
        for (int i = 0; i < b; i++) {
            int x{}; cin >> x;
            bob.push_back(x);
        }
        sort(alice.begin(), alice.end());
        sort(bob.begin(), bob.end());

        //first line is who wins if alice is the first player
        string firstWinner{}; 
        int currMax{0}, n, temp{currMax};
        if (a >= b)
            n = b;
        else
            n = a;
        
        for (int i = 0; i < n + 1; i++) {
            for (auto x : alice) {
                if (x > currMax) {
                    currMax = x;
                }
            }
            if (temp == currMax) {
                firstWinner = "Bob";
                break;
            }
            temp = currMax;
            for (auto x : bob) {
                if (x > currMax) {
                    currMax = x;
                }
            }
            if (temp == currMax) {
                firstWinner = "Alice";
                break;
            }
            temp = currMax;
        }

        //second line is who wins if bob is the first player
        string secondWinner{};
        currMax = 0; temp = currMax;

        for (int i = 0; i < n + 1; i++) {
            for (auto x : bob) {
                if (x > currMax) {
                    currMax = x;
                }
            }
            if (temp == currMax) {
                secondWinner = "Alice";
                break;
            }
            temp = currMax;
            for (auto x : alice) {
                if (x > currMax) {
                    currMax = x;
                }
            }
            if (temp == currMax) {
                secondWinner = "Bob";
                break;
            }
            temp = currMax;
        }       


        cout << firstWinner << endl << secondWinner << endl;
    }

    return 0;
}
