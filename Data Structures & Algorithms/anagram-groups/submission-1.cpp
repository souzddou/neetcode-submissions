class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> d;
        for (int i = 0; i < strs.size(); i++)
        {
            string s = strs[i];
            sort(strs[i].begin(), strs[i].end());
            d[strs[i]].push_back(s);
        }
        vector<vector<string>> res;
        for (auto it = d.begin(); it != d.end(); ++it)
        {
            res.push_back(it->second);
        }
        
        return res;
    }
};
