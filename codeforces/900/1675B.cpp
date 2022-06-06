// author : gautam narayan

#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& n);
bool isPossible(vector<int>& n);

bool isSorted(vector<int>& n) {
    for (int i = 0; i < n.size() - 1; i++) {
        if (n[i] < n[i + 1]) 
            continue;
        else
            return false;
    }
    return true;
}

bool isPossible(vector<int>& n) {
    if (n.size() < 2)
        return true;
    else if (n.size() == 2) {
        if (n[0] == 0 and n[1] == 0 || n[1] == 0)
            return false;
        else
            return true;
    }
    else {
        for (int i = 0; i < n.size() - 1; i++) {
            if (n[i] == 0 and n[i + 1] == 0)
                return false;
        }
        return true;
    }
    return true;
}

int main() {

    int tt{}; cin >> tt;
    while (tt--) {
        int n{}; cin>>n;
        vector<int> arr{};
        for (int i = 0; i < n;i++) {
            int temp{}; cin>> temp;
            arr.push_back(temp);
        }

        // thing begins
        int counter{0};
        // if arr is alr sorted
        if (isSorted(arr) == true) {
            cout << counter << endl;
            //cout << "output: " << counter << endl;
            continue;
        }
        if (isPossible(arr) == false) {
            cout << -1 << endl;
            //cout << "output: " << -1 << endl;
            continue;
        }

        for (int z = 0; z < INT_MAX; z++) {
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < arr[i]; j++) {
                    if (arr[i] >= arr[i + 1]) {
                        arr[i] /= 2;
                        counter++;
                    }
                    else
                        j = arr[i] - 1;
                }
            }
            if (isPossible(arr) == false) {
                cout << -1 << endl;
                break;
            }
            if (isSorted(arr) == true)
                break;
        }
        
        if (isPossible(arr) == false)
            continue;

  
        //cout << "output: " << counter << endl;
        cout << counter << endl;
    }

    return 0;
}
