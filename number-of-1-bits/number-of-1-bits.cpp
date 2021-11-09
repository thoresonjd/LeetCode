class Solution {
public:
    int hammingWeight(uint32_t n) {
        int hamWt = 0;
        while (n > 0) {     // No more 1 bits when n is zero
            hamWt += n & 1; // Check rightmost bit, add to weight if 1
            n = n >> 1;     // Shift bits to the right
        }
        return hamWt;
    }
};
