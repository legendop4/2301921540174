// Problem Name : Search in a Row-Column Sorted matrix
//link : https://www.geeksforgeeks.org/problems/search-in-a-matrix17201720/1

class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int n = mat.size(), m = mat[0].size();
        int row = 0, col = m - 1;
        while (row < n && col >= 0) {
            if (mat[row][col] == x) return true;
            else if (mat[row][col] > x) col--;
            else row++;
        }
        return false;
    }
};
