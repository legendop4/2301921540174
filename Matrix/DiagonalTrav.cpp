//LEETCODE PROBLEM  Diagonal Traverse 
// LINK : https://leetcode.com/problems/diagonal-traverse/
// submission detail : https://leetcode.com/submissions/detail/1521888954/

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if(mat.empty()) return {};

        int n = mat.size();
        int m = mat[0].size();

        vector<int> res;

        for(int i = 0;i<=m+n-2;i++)
            for(int j = 0;j<=i;j++){
                int x = j;
                int k = i-x;
                if(i%2 == 0)swap(x,k);
                if(x>=n || k >=m)continue;
                res.push_back(mat[x][k]);

            }
        return res;
    }
};
