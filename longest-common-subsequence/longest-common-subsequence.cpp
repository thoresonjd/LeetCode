class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int n = text1.length(), m = text2.length();
        
        vector<vector<int>> l(n+1, vector<int>(m+1)); // Length table
        
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++){
                if (i == 0 || j == 0)
                    l[i][j] = 0;
                else if (text1[i-1] == text2[j-1])    // The -1 helps account for terminating character
                    l[i][j] = l[i-1][j-1] + 1;
                else 
                    l[i][j] = max(l[i-1][j], l[i][j-1]);
                    
            }
        }
        
        // Print subsequence length table l
        for (int i = 0; i < n+1; i++) {
            for (int j = 0; j < m+1; j++) {
                cout << l[i][j] << " ";
            }
            cout << endl;
        }
        
        return l[n][m];
    }
};