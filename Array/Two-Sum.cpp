//LEETCODE PROBLEM TWO SUM - 
// LINK : https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = nums.size();
        vector<int> res;
        int j,k;
        for(j = 0; j<i-1;j++)
        {
            for( k = j+1;k<i;k++)
            {
                if(nums[j] + nums[k] == target)
                {    
                    res.push_back(j);
                    res.push_back(k);
                    
                }
            }
        }
        return res;
    }
};
