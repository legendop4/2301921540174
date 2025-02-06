// Problem name : Move all zeroes to end 
// problem link : https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int j = 0;
        for(int i = 0;i<n;i++){
            if(arr[i] != 0){
                arr[j] = arr[i];
                j++;
            }
        }
        while(j<n){
            arr[j] = 0;
            j++;
        }
        
    }
};
