//author: gautam narayan

class Solution {
public:
    int lengthOfLastWord(string s) {
        int letterCount = 0;
        
        for (int i = s.size() - 1; i >= 0; i--) {
            //letterCount > 0 for cases that are like this "hello world  " so it doesnt count the spaces in the end.
            //backwards iteration because we want to find length of last word 
            if (s[i] == ' ' && letterCount > 0)
                break;
            else if (s[i] != ' ')
                letterCount++;
        } 
        return letterCount;
    }
};
