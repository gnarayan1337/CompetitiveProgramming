#include <iostream>
#include <cmath>
using namespace std;

int convertToBinary(int n) {
    
    int power = 0;
    int sum = 0;
    for(int i = 0; i < 4; i++) {
        if (n & 1 == 1)
           sum += pow(10, power);
        n = n >> 1;
        power++;
    }
    return sum;

}

int main() {

    int n;
    cin >> n;
    cout << convertToBinary(n);

    return 0;
}
