class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int total = accumulate(arr.begin(), arr.end(), 0);
        int count = 0, sum = 0;
        if (total % 3 != 0) return false;
        for (int i = 0; i < arr.size() && count < (total != 0 ? 2 : 3); i++) {
            sum += arr[i];
            if (sum == total / 3) count++, sum = 0;
        }
        return count == (total != 0 ? 2 : 3);
    }
};
