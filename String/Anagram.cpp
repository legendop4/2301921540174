//LEETCODE PROBLEM  Valid Anagram
// LINK : https://leetcode.com/problems/valid-anagram/
// submission detail : https://leetcode.com/submissions/detail/1519176062/

class Solution {
public:
    bool isAnagram(string s, string t) {
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
