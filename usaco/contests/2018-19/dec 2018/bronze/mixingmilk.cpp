// author : gautam narayan

#include <bits/stdc++.h>
using namespace std;

void pour (int from, int to);
int c[3], m[3];

void pour (int from, int to) {
    // amount is the minimum of the milk in FROM bucket or the capacity left in the TO bucket
    int amt = min(m[from], c[to] - m[to]);
    // we subtract the amt of milk from the FROM bucket
    m[from] -= amt;
    // we add the amt of milk we subtracted from the FROM bucket to the TO bucket
    m[to] += amt;
}

int main() {
    ifstream fin("mixmilk.in");
    ofstream fout("mixmilk.out");

    for (int i = 0; i < 3; i++) 
        fin >> c[i] >> m[i];

    for (int i = 0; i < 100; i++) 
        pour(i % 3, (i + 1) % 3);
        /*  pour function FROM a bucket TO a bucket
            ex:     0 mod 3 = 0
                    1 mod 3 = 1
                    2 mod 3 = 2
                    3 mod 3 = 0
                    4 mod 3 = 1....
        */

    for (int i = 0; i < 3; i++) 
        fout << m[i] << endl;

}
