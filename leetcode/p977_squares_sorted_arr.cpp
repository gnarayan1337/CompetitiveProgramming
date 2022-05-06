//author: gautam narayan

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr {};
        for (auto x: nums) 
            arr.push_back(pow(x, 2));
        sort(arr.begin(), arr.end());
        return arr; 
    }
};
