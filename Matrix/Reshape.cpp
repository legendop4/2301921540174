//LEETCODE PROBLEM  Reshape the Matrix
// LINK : https://leetcode.com/problems/reshape-the-matrix/
// submission detail : https://leetcode.com/submissions/detail/1520911598/


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> res(r,vector<int> (c));
        vector<int> temp;
        int count = 0;
        for(int i = 0;i<mat.size();i++)
            for(int j  = 0;j<mat[i].size();j++)
                temp.push_back(mat[i][j]);
        if(r*c != mat.size()*mat[0].size()){
            return mat;
        }
        for(int i = 0;i<r;i++)
            for(int j = 0;j<c;j++)
                res[i][j] = temp[count++];
        return res;

        
    }
};
