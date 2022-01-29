class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v; 
        for (int i = 1; i <= n; i++) {
            string str = "";
            if (i % 3 == 0) str += "Fizz";
            if (i % 5 == 0) str += "Buzz";
            v.push_back(str != "" ? str : to_string(i));
        }
        return v;
    }
};
