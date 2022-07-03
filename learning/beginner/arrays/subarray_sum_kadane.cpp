#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    
    int current_sum = 0;
    int largest_sum = 0;

    //to understand just do this in your head runs in o(n) time best out of the 3 other methods
    //bruteforce runs in n^3, prefix runs in n^2, this runs in n.

    for (int i = 0; i < A.size(); i++) {
        current_sum = current_sum + A[i];
        if (current_sum < 0 ) {
            current_sum = 0;
        }

        largest_sum = max(largest_sum, current_sum);
    }
    return largest_sum;


}

int main() {

    vector<int> A {1, -2, 3, 4, 4, -2};
    cout << maxSumSubarray(A);

}
