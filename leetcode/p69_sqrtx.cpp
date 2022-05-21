//author: gautam narayan

class Solution {
public:
    int mySqrt(int x) {
        
        long mid{};
        bool isPerfectSquare = false;
        int left_pointer = 0;
        int right_pointer = x;
        while(left_pointer <= right_pointer) {
            mid = (left_pointer + right_pointer) / 2;
            if ((mid * mid) == x) {
                isPerfectSquare = true;
                break;
            }
            else if ((mid * mid) < x)
                left_pointer = mid + 1;
            else if ((mid * mid) > x)
                right_pointer = mid - 1;
        }
        
        if (isPerfectSquare == true)
            return mid;
        else {
            int left_pointer = 0, right_pointer = x;
            while(left_pointer < right_pointer) {
                mid = (left_pointer + right_pointer) / 2;
                if ((mid * mid) < x)
                    left_pointer = mid + 1;
                else if ((mid * mid) > x)
                    right_pointer = mid - 1;
            }
            left_pointer--;
            if (right_pointer * right_pointer > x)
                return left_pointer;
            else 
                return right_pointer;
        }
    }
};
