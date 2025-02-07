//Problem Name : Non Repeating Element 
// Problem Link : https://www.geeksforgeeks.org/problems/non-repeating-element3958/1

class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // Complete the function
        unordered_map<int,int> mp;
        for(int i = 0;i<arr.size();i++)
            mp[arr[i]]++;
        for(auto it:arr)
            if(mp[it] == 1)
                return it;
        return 0;
    }
    
};
