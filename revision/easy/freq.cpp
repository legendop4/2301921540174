// Problem Name : Find frequency of elements 
// Problem Link : https://www.geeksforgeeks.org/problems/find-the-frequency/1

class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        // Your code here
        int ans= 0;
        for(int i = 0;i<arr.size();i++)
            if(x == arr[i])
                ans++;
        return ans;
    }
};
