class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
        ostringstream oss;
        oss << x;
        string num = oss.str();
        
        for (int i = 0; i < num.size()/2; i++)
            if (num[i] != num[num.size()-i-1])
                return false;
        
        return true;
    }
};