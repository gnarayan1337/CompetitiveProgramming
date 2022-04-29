//author: gautam narayan

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left_pointer = 0;
        int right_pointer = nums.size()-1;
        
        while (left_pointer <= right_pointer) {
            int mid = (right_pointer + left_pointer) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                left_pointer = mid + 1;
            else if (nums[mid] > target)
                right_pointer = mid - 1;
        }
        return -1;
    }
};
