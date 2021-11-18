// Latest solution
class Solution {
public:
    int reverse(int x) {
        if (x >= INT_MAX || x <= INT_MIN) return 0;
        
        string num = to_string(abs(x));
        int sign = x > 0 ? 1 : -1;
        
        for (int i = 0 ; i < num.length()/2; i++)
            swap(num[i], num[num.length()-i-1]);
        
        try {
            return sign * stoi(num);
        } catch (out_of_range& e) {
            printf("Out of range");
        }
        
        return 0;
    }
};

// Old solution
class Solution {
public:
    int reverse(int x) {
        
        if (x >= INT_MAX || x <= INT_MIN) return 0;
        
        ostringstream oss;
        oss << x;
        string num = oss.str();

        int res;
        int sign = x > 0 ? 1 : -1;
        int len = num.length();
        for (int i = 0; i < len/2; i++)
            swap(num[i], num[len-i-1]);

        try {
            res = stoi(num);
        }
        catch (out_of_range& e) {
            return 0; 
        }
        
        return sign * res;
    }
};
