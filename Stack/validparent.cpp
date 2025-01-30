//LEETCODE PROBLEM  Valid Parentheses
// LINK : https://leetcode.com/problems/valid-parentheses/
// submission detail : https://leetcode.com/submissions/detail/1525161065/

class Solution {
public:
    bool isValid(string s) {
        stack<char> chk;
        
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                chk.push(c);
            } else {
                if (chk.empty()) return false;  // No matching opening bracket
                
                char top = chk.top();
                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')) {
                    chk.pop();
                } else {
                    return false;  // Mismatched bracket
                }
            }
        }
        
        return chk.empty();  // If stack is empty, it's valid
    }
};
