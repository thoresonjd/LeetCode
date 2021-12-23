class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        helper(res, {}, nums);
        return res;
    }
    
    void helper(vector<vector<int>>& r, vector<int> p, vector<int>& c) {
        if (c.empty())
            r.push_back(p);
        for (vector<int>::iterator it = c.begin(); it != c.end(); it++) {
            int num = *it;
            p.push_back(num);
            c.erase(it);
            helper(r, p, c);
            p.pop_back();
            c.insert(it, num);
        }
    }    
};