//LEETCODE PROBLEM Rotate Array  
// LINK : https://leetcode.com/problems/rotate-array/
// submission detail : https://leetcode.com/submissions/detail/1517974519/


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
       k = k%n;
        reverse(nums.begin(),nums.begin()+(nums.size()-k));

        reverse(nums.begin()+(nums.size()-k),nums.end());
    
        reverse(nums.begin(),nums.end());
    }
};
