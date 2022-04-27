//author: gautam narayan

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int current_sum = 0;
        int largest_sum = 0;
        
        bool isNegative = NULL;
        
        for (auto n : nums) {
            if (n < 0 && nums.size() > 1)
                isNegative = true;
            else {
                isNegative = false;
                break;
            }
        }
        
        int maxNum = INT_MIN;
        
        for (int i = 0; i < nums.size(); i++) {
            current_sum += nums.at(i);
            if (current_sum < 0 && nums.size() > 1 && isNegative == false)
                current_sum = 0;
            else if (nums.size() < 2)
                largest_sum = current_sum;
            else if (isNegative == true) {
                if (nums.at(i) > maxNum)
                    maxNum = nums.at(i);
                //largest_sum = maxNum;
            }
            
            if (isNegative == false)
                largest_sum = max(current_sum, largest_sum);
            else if (isNegative == true)
                largest_sum = maxNum;
        }
        return largest_sum;
        
    }
};
