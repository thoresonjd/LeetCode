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
};