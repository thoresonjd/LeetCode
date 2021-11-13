class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.length();
        if (n < 3) return 0;
        
        int count = 0;
        
        int arr[26];
        
        for(int i = 0; i < 26; i++) {
            arr[i] = 0;
        }
        
        for (int i = 0; i < s.length()-2; i++) {
            for (int j = 0; j < 3; j++) {
                char c = s[i+j];
                arr[c - 'a']++;
            }
            
            bool goodSub = true;
            for (int j = 0; j < 26; j++) {
                if (arr[j] > 1) {
                    goodSub = false;
                    break;
                }
            }
            if (goodSub) count++;
            
            for(int i = 0; i < 26; i++) {
                arr[i] = 0;
            }
            
        }
        
        return count;
    }
};