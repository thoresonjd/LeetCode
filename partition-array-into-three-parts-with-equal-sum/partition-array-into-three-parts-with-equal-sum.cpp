class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int total = accumulate(arr.begin(), arr.end(), 0);
        int parts = 0;
        if (total % 3 != 0) return false;
        for (int i = 0, sum = 0; i < arr.size() && parts < (total != 0 ? 2 : 3); ++i) {
            sum += arr[i];
            if (sum == total / 3) parts++, sum = 0;
        }
        return parts == (total != 0 ? 2 : 3);
    }
};