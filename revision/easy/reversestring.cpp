// Problem Name : Reverse A String
// Problem link : https://www.geeksforgeeks.org/problems/java-reverse-a-string0416/1

class Solution {
  public:
    string revStr(string s) {
        // code here
        return string(s.rbegin(),s.rend());
    }
};
