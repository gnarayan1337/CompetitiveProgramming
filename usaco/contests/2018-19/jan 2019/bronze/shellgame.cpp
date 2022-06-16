// author : gautam narayan

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int N{}; cin>>N;
    vector<int> arr{1, 2, 3};
    int count1{}, count2{}, count3{};
    for (int i = 0; i < N; i++) {
        int a, b, g;
        cin >> a >> b >> g;
        a--; b--; g--;
        swap(arr[a], arr[b]);
        if (arr[g] == 1)
            count1++;
        else if (arr[g] == 2)
            count2++;
        else if (arr[g] == 3)
            count3++;
    }

    cout << max(max(count1, count2), count3);

    return 0;
}
