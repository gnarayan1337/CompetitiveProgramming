//author: gautam narayan
class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0)
            return false;
        
        vector<int> arr {};
        int j {}; 
        int y = x;
        for (int i = 1; i < INT_MAX; i++) {
            j = i;
            x /= 10;
            if (x == 0)
                break;
        }
       
        for (int i = 0; i < j; i++) {
            arr.insert(arr.begin(), (y % 10));
            y /= 10;
        }
       
       
        for (int i = 0; i < (arr.size()); i++) {
            if (arr[i] == arr[arr.size() - (i + 1)])
                continue;
            else
                return false;
        }
        
       
        return true;
    }
};
