class Solution {
public:
    int reverse(int x) {
        if (x >= INT_MAX || x <= INT_MIN) return 0;
        
        string num = to_string(abs(x));
        int sign = x > 0 ? 1 : -1;
        
        ::reverse(num.begin(), num.end());
        
        try {
            return sign * stoi(num);
        } catch (out_of_range& e) {
            printf("Out of range");
        }
        
        return 0;
    }
};