// author : gautam narayan
    
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
   cin.tie(nullptr) -> ios::sync_with_stdio(false);

   int n{}, k{};
   cin >> n >> k;

   int counter{0};
   while(n--) {
       int t{};
       cin >> t;

       if (t % k == 0) {
           counter++;
       }
   }

    cout << counter << "\n";

    return 0;
}
