// Largest Element in Array 
// Problem Link : https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        // code here
        for(int i = 1;i<arr.size();i++){
            if(arr[i-1]>arr[i])
                return false;
        }
        return true;
    }
};
