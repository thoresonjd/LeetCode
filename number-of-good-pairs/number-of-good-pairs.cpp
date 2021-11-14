class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> occurrences;  // Store occurrences
        int goodPairs = 0;                    // Count good pairs
        for (int num : nums)                  // Add each value in nums to occurrences
            goodPairs += occurrences[num]++;  // Increment frequency and add to result
        return goodPairs;                
            
        
        // O(n^2) Below
        // int goodPairs = 0;
        // for (int i = 0; i < nums.size() - 1; i++) 
        //     for (int j = i + 1; j < nums.size(); j++)
        //         if (nums[i] == nums[j])
        //             goodPairs++;
        // return goodPairs;
    }
};