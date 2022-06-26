// author : gautam narayan

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool form_rect(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
int inter_area(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
int lawn_area(int x1, int y1, int x2, int y2);

bool form_rect(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
    if ((y3 <= y1 && y4 >= y2) && (x3 <= x1 || x4 >= x2))
        return true;
    else if ((x3 <= x1 && x4 >= x2) && (y3 <= y1 || y4 >= y2))
        return true;
    else
        return false;
}
int inter_area(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
    int width = min(x2, x4) - max(x1, x3);
    int length = min(y2, y4) - max(y1, y3);
    return length * width;
}
int lawn_area(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) * abs(y1 - y2);
}

int main() {

    //freopen("billboard.in", "r", stdin);
    //freopen("billboard.out", "w", stdout);

    int x1, y1, x2, y2, x3, y3, x4, y4; cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

    /*
     * if we form a rectangle then we proceed with finding the area of the intersect and output the area of lawn - intersect
     *      -if our answer is <0 we just output 0
     * if we dont form a rectangle then we just output the lawn area
     */

    // check if we form a rect
    if (form_rect(x1, y1, x2, y2, x3, y3, x4, y4) == 0) {
        cout << lawn_area(x1, y1, x2, y2) << "\n";
        return 0;
    }

    int out = lawn_area(x1, y1, x2, y2) - inter_area(x1, y1, x2, y2, x3, y3, x4, y4);
    if (out < 0)
        cout << 0;
    else
        cout << out << "\n";

    return 0;
}
