class Solution {
public:
    bool checkOnesSegment(string s) {
        return string::npos == s.find("01");
        
        // regex p("1+0+1+.*");        // Pattern
        // bool m = regex_match(s, p); // Match
        // return !m;
    }
};