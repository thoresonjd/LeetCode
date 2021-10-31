class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stk;
        string res = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (stk.size() > 0)
                    res += s[i];
                stk.push(s[i]);
            }
            else if (s[i] == ')') {
                if (stk.size() > 1)
                    res += s[i];
                stk.pop(); 
            }
        }
        return res;
    }
};