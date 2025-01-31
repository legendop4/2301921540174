//LEETCODE PROBLEM  Find the Middle Index in Array
// LINK : https://leetcode.com/problems/find-the-middle-index-in-array/
// submission detail : https://leetcode.com/submissions/detail/1526209903/


class Solution {
public:
    int findMiddleIndex(vector<int>& arr) {
         int rs = 0;
        for(int i = 0;i<arr.size();i++){
            rs += arr[i];
        }
        int ls = 0;
        for(int i = 0;i<arr.size();i++){
            rs -= arr[i];
            
            if(ls == rs){
                return i;
            }
            ls+= arr[i];
        }
        return -1;
    }
};
