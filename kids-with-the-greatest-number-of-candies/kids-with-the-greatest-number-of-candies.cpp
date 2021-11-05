class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = 0;
        for (int i : candies)
            if (i > maxCandies)
                maxCandies = i;
        
        vector<bool> res;
        for (int i : candies)
            res.push_back(i + extraCandies >= maxCandies);
        
        return res;               
    }
};