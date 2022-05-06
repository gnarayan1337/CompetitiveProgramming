//author: gautam narayan

class Solution {
public:
    bool isPerfectSquare(int num) {
        int left_pointer = 0, right_pointer = num;
        while (left_pointer <= right_pointer) {
            long long mid = (left_pointer + right_pointer) / 2;
            if ( (mid * mid) == num )
                return true;
            else if ( (mid * mid ) > num ) 
                right_pointer = mid - 1; 
            else if ( (mid * mid ) < num ) 
                left_pointer = mid + 1;
        }
        return false;
    }
};
