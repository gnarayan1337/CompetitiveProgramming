//author: gautam narayan

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long left_pointer = 1;
        long long right_pointer = n;
        while(left_pointer <= right_pointer) {
            long long mid = (left_pointer + right_pointer) / 2;
            if (isBadVersion(mid) == true) {
                if (isBadVersion(mid - 1) == false)
                    return mid;
                else
                    right_pointer = mid -1;
            }
            else if (isBadVersion(mid) == false)
                left_pointer = mid + 1;
        }
        return -1;
    }
};
