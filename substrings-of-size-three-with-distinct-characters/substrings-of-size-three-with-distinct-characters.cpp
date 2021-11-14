class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.length(), count = 0, k = 3;
    
        if (n < 3) return 0;
        
        for (int i = 0; i < n - k + 1; i++) {
            int arr[3] = {s[i], s[i+1], s[i+2]};
            if (arr[0] != arr[1] && arr[1] != arr[2] && arr[2] != arr[0]) {
                count++;
            }          
        }
        
        return count;
    }
};