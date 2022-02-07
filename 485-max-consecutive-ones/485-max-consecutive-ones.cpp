class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0, currentOnes = 0;
        for (int num : nums) {
            if (num) currentOnes++;
            else currentOnes = 0;
            maxOnes = max(maxOnes, currentOnes);
        }
        
        return maxOnes;
    }
};