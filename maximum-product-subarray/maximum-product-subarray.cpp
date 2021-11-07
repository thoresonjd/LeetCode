class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minProd = 1, maxProd = 1, product = INT_MIN;
        for (int i : nums) {
            if (i < 0) swap(minProd, maxProd);
            minProd = min(minProd*i, i);
            maxProd = max(maxProd*i, i);
            product = max(product, maxProd);
        }
        return product;
    }
};
