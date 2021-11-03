class Solution {
public:
    int rob(vector<int>& houses) {
        int lastHouseRobbed = 0;
        int lastHouseSpared = 0;
        
        for (int money : houses) {
            int robCurrentHouse = lastHouseSpared + money;
            int spareCurrentHouse = max(lastHouseRobbed, lastHouseSpared);
            
            lastHouseRobbed = robCurrentHouse;
            lastHouseSpared = spareCurrentHouse;
        }
        
        return max(lastHouseRobbed, lastHouseSpared);
    }
    
// Solution below incomplete, some tests fail.
// Skips zeros, but does not maximize in every case
//     int rob(vector<int>& nums) {
//         int n = nums.size();
        
//         if (n == 1) 
//             return nums[0];
        
//         int moneyRobbedEvens = 0;
//         int moneyRobbedOdds = 0;
        
//         for (int i = 0; i < nums.size();) {
//             moneyRobbedEvens += nums[i];
//             i += nums[i] == 0 ? 1 : 2;
//         }
        
//         for (int i = 1; i < nums.size();) {
//             moneyRobbedOdds += nums[i];
//             i += nums[i] == 0 ? 1 : 2;
//         }
        
//         return max(moneyRobbedEvens, moneyRobbedOdds);
//     }
};