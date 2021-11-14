class Solution {
public:
    bool checkZeroOnes(string s) {
        int maxConsecOnes = INT_MIN, maxConsecZeros = INT_MIN;
        int onesCount = 0, zerosCount = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                onesCount++;
                zerosCount = 0;
            }
            else if (s[i] == '0') {
                zerosCount++;
                onesCount = 0;
            }
            maxConsecOnes = max(maxConsecOnes, onesCount);
            maxConsecZeros = max(maxConsecZeros, zerosCount);
        }
        return maxConsecOnes > maxConsecZeros;
    }
};