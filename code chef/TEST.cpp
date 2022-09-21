// author : gautam narayan

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
   cin.tie(nullptr) -> ios::sync_with_stdio(false);

   while(true) {
       int x{};
       cin >> x;
       if (x == 42)
           break;
       else
           cout << x << " ";
   }

    return 0;
}
