// author: gautam narayan

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // two pointers
        int i = 0;
        int j = 0;
        while (i < nums.size()) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
            else
                i++;
        }
    }
};
