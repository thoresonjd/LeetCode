class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> freq;
        vector<string> res;
        istringstream stream1(s1);
        istringstream stream2(s2);
        
        do {
            string word;
            stream1 >> word;
            freq[word]++;
        } while (stream1);
        
        do {
            string word;
            stream2 >> word;
            freq[word]++;
        } while (stream2);
        
        for (auto it = freq.begin(); it != freq.end(); it++)
            if (it->second == 1)
                res.push_back(it->first);
        
        return res;
    }
};
