// Check if Array is Sorted
// problem Link : https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1

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
