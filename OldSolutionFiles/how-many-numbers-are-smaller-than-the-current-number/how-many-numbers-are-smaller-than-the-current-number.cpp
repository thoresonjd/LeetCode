class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int, int> m;
        vector<int> res(nums);
        sort(res.begin(), res.end());

        for (int i = 0; i < res.size(); i++)
            if (m.find(res[i]) == m.end())
                m[res[i]] = i;
        
        for (int i = 0; i < nums.size(); i++)
            res[i] = m[nums[i]];
        
        return res;
    }
};
