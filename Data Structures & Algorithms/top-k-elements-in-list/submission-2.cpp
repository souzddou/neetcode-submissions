class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> d;
        for (int num : nums)
            d[num]++;
        
        vector<pair<int, int>> array;
        for (const auto& pair : d)
            array.push_back({pair.second, pair.first});
        sort(array.rbegin(), array.rend());

        vector<int> res;
        for(int i = 0; i < k; i++)
            res.push_back(array[i].second);
        return res;
    }
};
