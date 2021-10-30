class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, char> j;
        for (int i = 0; i < jewels.size(); i++)
            j[jewels[i]] = jewels[i];
        
        int count = 0;
        for (int i = 0; i < stones.size(); i++) {
            if (j.find(stones[i]) != j.end())
                count++;
        }
    
        return count;
    }
};