// author : gautam narayan

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
   cin.tie(nullptr) -> ios::sync_with_stdio(false);

    double X{}, Y{};
    cin >> X >> Y;

    if ((static_cast<int>(X) % 5 != 0) or (Y - X - .50) < 0)
        cout << fixed << setprecision(2) << Y << "\n";
    else 
        cout << fixed << setprecision(2) << (Y - X - .50) << "\n";

    return 0;
}
