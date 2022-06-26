// author : gautam narayan

#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);

    int x1a{}, y1a{}, x2a{}, y2a{}; cin>>x1a>>y1a>>x2a>>y2a;
    int x1b{}, y1b{}, x2b{}, y2b{}; cin>>x1b>>y1b>>x2b>>y2b;
    
    int ydiff = max(y2a, y2b) - min(y1a, y1b);
    int xdiff = max(x2b, x2a) - min(x1a, x1b);

    if (ydiff > xdiff)
        cout << ydiff * ydiff << endl;
    else if (ydiff < xdiff)
        cout << xdiff * xdiff << endl;
    else if (ydiff == xdiff)
        cout << xdiff * ydiff << endl;

    
    return 0;
}
