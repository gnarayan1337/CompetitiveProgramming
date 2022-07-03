//author: gautam narayan

#include <iostream>

using namespace std;
//prefix sum approach O(n^2)
int largestSubarraySum2(int arr[], int n);
int largestSubarraySum2(int arr[], int n) {

    //Prefix Sums
    int prefix[100] = {0};
    prefix[0] = arr[0];

    //reason we dont start i from 0 is because i-1 would return negative
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    } 

    int largest_sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            //if i > 0 do x if not do y
            int subarraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];

            /*
            for (int k = i; k <= j; k++) {
                subarraySum += arr[k];
            }
            */
            largest_sum = max(largest_sum, subarraySum);
        }
    }
    return largest_sum;
}


int main() {

    int arr[] = { -2, 3, 4, -1, 5, -12, 6, 1, 3 };
    int n = sizeof(arr) / sizeof(int);

    cout << largestSubarraySum2(arr, n) << endl;
    return 0;
}
