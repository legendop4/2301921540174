//LEETCODE PROBLEM  Matrix Diagonal Sum 
// LINK : https://leetcode.com/problems/matrix-diagonal-sum/
// submission detail : https://leetcode.com/submissions/detail/1520932106/


class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for(int i = 0;i<mat.size();i++)
            sum+= mat[i][i];
        int n = mat.size();
        for(int i = 0; i < n; i++) 
            sum += mat[i][n - i - 1]; 
        if(mat.size()%2 !=0)
            sum -= mat[n/2][n/2];
        return sum;
    
    }
};
