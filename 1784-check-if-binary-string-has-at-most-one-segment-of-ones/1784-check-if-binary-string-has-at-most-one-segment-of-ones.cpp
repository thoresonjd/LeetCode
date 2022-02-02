class Solution {
public:
    bool checkOnesSegment(string s) {
        regex p("1+0+1+.*");          // Pattern
        bool m = regex_match(s, p); // Match
        return !m;
    }
};