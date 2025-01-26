//LEETCODE PROBLEM  Transpose Matrix
// LINK : https://leetcode.com/problems/transpose-matrix/
// submission detail : https://leetcode.com/submissions/detail/1520919987/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        int rows = mat.size();      
        int cols = mat[0].size();  
        vector<vector<int>> res;
        res.resize(cols,vector<int> (rows));
        for(int i = 0;i<rows;i++)
            for(int j = 0;j<cols;j++)
                res[j][i] = mat[i][j];
        return res;

    }
};
