class Solution {
public:
    int maxDepth(string s) {
        if (s == "") return 0;
        int c1 = 0;
        stack<char> stk;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                stk.push(s[i]);
                c1 = stk.size() > c1 ? stk.size() : c1;
            }
            else if (s[i] == ')') {
                stk.pop();
            }
        }
        return c1;
    }
};