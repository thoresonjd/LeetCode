class Solution {
public:
    int maximum69Number (int num) {
        int tempNum = num;
        vector<int> digits;
        while (tempNum > 0) {
            digits.push_back(tempNum % 10);
            tempNum /= 10;
        }
        
        int numToAdd = 0;
        for (int i = digits.size() - 1, j = 1; i >= 0 && numToAdd == 0; i--, j++)
            if (digits[i] == 6)
                numToAdd = 3 * pow(10,digits.size() - j);
        
        return num + numToAdd;
    }
};
