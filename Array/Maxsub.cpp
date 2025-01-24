//LEETCODE PROBLEM  Maximum sub array 
// LINK : https://leetcode.com/problems/maximum-subarray/
// submission detail : https://leetcode.com/submissions/detail/1519164270/

class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        long long max = LONG_MIN;
        long long sum = 0;
        int n = arr.size();
        
        for(int i = 0;i<n;i++){
            sum += arr[i];
            
            if(sum>max){
                max = sum;
            }
            
            if(sum<0){
                sum = 0;
            }
        }
        return max;
    }
};
