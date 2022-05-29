// author: gautam narayan

#include <bits/stdc++.h>
using namespace std;

void arrConfig(int n, vector<int>& arr) {
    arr.clear();
    while (n > 0) {
        arr.push_back(n % 10);
        n /= 10; 
    }
    reverse(arr.begin(), arr.end());
}

int main() {

    int n{};
    cin >> n;
    vector<int> arr{};

    // puts n in arr
    arrConfig(n, arr);

    int product {1};

    while (arr.size() > 1) {
        product = 1;
        for (auto x : arr) {
            if (x == 0)
                x = 1;
            product *= x;
        }

        // put digits of product into arr
        arrConfig(product, arr);
    }

    cout << product;

    return 0;
}

/*
input : 808
output : 8

input : 1344
output : 6

input : 1234
output : 8
*/
