class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        string binarySum = "";
        int i = 0, sum = 0, carry = 0;
        
        while (i < a.length() || i < b.length()) {
            
            sum = carry;
            
            if (i < a.length()) {
                sum += a[i] - '0';
            }
                
            if (i < b.length()) {
                sum += b[i] - '0';
            }
            
            if (sum == 0) {
                binarySum += '0';
                carry = 0;
            }
            else if (sum == 1) {
                binarySum += '1';
                carry = 0;
            }
                
            else if (sum == 2) {
                binarySum += '0';
                carry = 1;
            }
                
            else {
                binarySum += '1';
                carry = 1;
            }
                
            i++;
        }
        
        if (carry == 1)
            binarySum += '1';
        reverse(binarySum.begin(), binarySum.end());
        return binarySum;
    }
};