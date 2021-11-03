class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> answer, fromStart = {1}, fromEnd = {1};
        
        for (int i = 1; i < n; i++) {
            fromStart.push_back(fromStart[i-1]*nums[i-1]);
            fromEnd.push_back(fromEnd[i-1]*nums[n-i]);
        }
        
        for (int i = 0; i < n; i++)
            answer.push_back(fromStart[i]*fromEnd[n-i-1]);
        
        return answer;
        
    }
};