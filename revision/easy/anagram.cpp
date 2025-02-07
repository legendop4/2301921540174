// Problem Name : Anagram String 
// Problem Link : https://www.geeksforgeeks.org/problems/java-anagram-strings3549/1

class Solution {
  public:
    int areAnagram(string s, string t) {
        // code here
        vector<int>sk(26,0);
        for(char c:s){
            sk[c-'a']++;
        }
        for(char c:t){
            sk[c-'a']--;
        }
        for(int s:sk){
            if(s!=0){
                return false;
            }
        }
        return true;
    }
};
