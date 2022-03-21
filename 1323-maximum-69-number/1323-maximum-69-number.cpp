class Solution {
public:
    int maximum69Number (int num) {
        int temp = num;
        vector<int> digits;
        while (temp > 0) {
            digits.push_back(temp % 10);
            temp /= 10;
        }
        
        int numToAdd = 0;
        for (int i = digits.size() - 1, j = 1; i >= 0 && numToAdd == 0; i--, j++) {
            if (digits[i] == 6) {
                numToAdd = 3 * pow(10, digits.size() - j);
            }
        }
        
        return num + numToAdd;
    }
};