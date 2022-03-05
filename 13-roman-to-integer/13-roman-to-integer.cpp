class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int value = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'I' && s[i+1] == 'V')      value += 4,   i++;
            else if (s[i] == 'I' && s[i+1] == 'X') value += 9,   i++;
            else if (s[i] == 'X' && s[i+1] == 'L') value += 40,  i++;
            else if (s[i] == 'X' && s[i+1] == 'C') value += 90,  i++;
            else if (s[i] == 'C' && s[i+1] == 'D') value += 400, i++;
            else if (s[i] == 'C' && s[i+1] == 'M') value += 900, i++;
            else value += roman[s[i]];
        }
        return value;
    }
};