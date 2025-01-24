//LEETCODE PROBLEM  FindUniquw
// LINK : https://leetcode.com/problems/first-unique-character-in-a-string/
// submission detail : https://leetcode.com/submissions/detail/1519184240/

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> sk(26,0);
        for(char c : s){
            sk[c-'a']++;
        }
        for(int i = 0;i<s.size();i++){
            if(sk[s[i]-'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};
