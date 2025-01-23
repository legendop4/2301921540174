//LEETCODE PROBLEM Missing Number
// LINK : https://leetcode.com/problems/missing-number/
// submission detail : https://leetcode.com/submissions/detail/1517980791/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = 0;
        int i = 0;
        while(i < nums.size()){
            if(nums[i] == n){    n++;
                i++;}
            else
                break;
        }
        return n;
    }
};

