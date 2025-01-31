//LEETCODE PROBLEM Next Greater Element I
// LINK : https://leetcode.com/problems/next-greater-element-i/
// submission detail : https://leetcode.com/submissions/detail/1526218436/



class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int j = 0;

        for(int i = 0; i < nums1.size(); i++)
        {
            int temp = nums1[i];

            auto it = find(nums2.begin(), nums2.end(), temp);
            j = it - nums2.begin();

            int e = -1;

            for(j + 1; j < nums2.size(); j++)
            {
                if(nums2[j] > temp)
                {
                    e = nums2[j];
                    break;
                }
            }
            ans.push_back(e);
        }
        return ans;
    }
};
