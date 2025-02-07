// Problem Name : Transpose of a matrix
// Problem Link : https://www.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1

class Solution {
  public:
    // Function to find transpose of a matrix.
    void transpose(vector<vector<int>>& matrix, int n) {
        // code here
         int arr[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=matrix[j][i];
            }
        }
          for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[i][j]=arr[i][j];
            }
        }
        
    }
};
