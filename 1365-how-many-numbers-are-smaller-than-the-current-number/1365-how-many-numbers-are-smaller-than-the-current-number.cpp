class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> res(nums);
        sort(res.begin(), res.end());
      
        // Index of first occurrence of a given number in the sorted
        // vector is the number of elements smaller than it
        for (int i = 0; i < res.size(); i++)
            if (m.find(res[i]) == m.end())
                m[res[i]] = i;
        
        // Overwrite sorted array with the first index of each
        // occurring instance of a given number
        for (int i = 0; i < nums.size(); i++)
            res[i] = m[nums[i]];
        
        return res;
    }
};