//author: gautam narayan

class Solution {
public:
    long guessNumber(int n) {
        long left_pointer = 0;
        long right_pointer = n;
        
        while (left_pointer <= right_pointer) {
            long mid = (left_pointer + right_pointer) / 2;
            if (guess(mid) == 0)
                return mid;
            else if (guess(mid) == -1)//higher
                right_pointer = mid - 1;
            else if (guess(mid) == 1)//lower
                left_pointer = mid + 1;
        }
        return -1;
    }
};
