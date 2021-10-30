class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        string sSorted = s, tSorted = t;
        sort(sSorted.begin(), sSorted.end());
        sort(tSorted.begin(), tSorted.end());
        for (int i = 0; i < s.size(); i++)
            if (sSorted[i] != tSorted[i])
                return false;
        return true;
    }
};