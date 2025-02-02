//LEETCODE PROBLEM  SLiding Window Maximum
// LINK : https://leetcode.com/problems/sliding-window-maximum/
// submission detail : https://leetcode.com/submissions/detail/1528548585/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> q;

        for (int i = 0; i < k; i++) {
            while(!q.empty() && nums[q.back()] < nums[i]) {
                q.pop_back();
            }
            q.push_back(i);
        }

        ans.push_back(nums[q.front()]);

        for (int i = k; i < nums.size(); i++) {
            // removal
            if (!q.empty() && i - q.front() >= k) {
                q.pop_front();
            }
            // insertion
            while(!q.empty() && nums[q.back()] < nums[i]) {
                q.pop_back();
            }
            q.push_back(i);
            // store
            ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};
