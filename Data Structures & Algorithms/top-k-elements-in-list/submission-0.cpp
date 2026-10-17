class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqmp;
        for (int num: nums) {
            freqmp[num]++;
        }
        map<int, vector<int>, greater<int>> revMap;
        for (auto &x : freqmp) {
            revMap[x.second].push_back(x.first);
        }
        vector<int> res;
        int count = 0;
        auto it = revMap.begin();
        while (count < k) {
            for (const auto&x : it->second) {
                res.push_back(x);
            }
            count += it->second.size();
            it++;
        }
        return res;
       
    }
};
