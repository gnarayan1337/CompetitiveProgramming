//author: gautam narayan

class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        double sum = 0;
        for (int i = 1; i < salary.size() - 1; i++)
           sum += salary.at(i);
        double average = sum / (salary.size() - 2);
        return average;
    }
};
