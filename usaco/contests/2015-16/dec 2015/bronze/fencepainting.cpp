// author : gautam narayan

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d; cin>>a>>b>>c>>d;
    int num = max(max(a,b), max(c,d));
    vector<bool> arr(num);

    for (int i = a; i < b; i++) {
        arr[i] = 1;
    }
    for (int i = c; i < d; i++) {
        arr[i] = 1;
    }

    int ans = 0;
    for (int i = 0; i < num; i++) {
       if (arr[i] == 1)
           ans++;
    }

    cout << ans << "\n";

    return 0;
}
