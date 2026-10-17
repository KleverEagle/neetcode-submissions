class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<int>> mp;
        for (int i = 0; i < strs.size(); i++) {
            // Make a freq map
            vector<int> freqMap(26);
            for (int j = 0; j < strs[i].size(); j++) {
                freqMap[strs[i][j] - 'a']++;
            }
            // Put it in map
            mp[freqMap].push_back(i);
        }
        vector<vector<string>> res;
        for (const auto&x: mp) {
            vector<string> subRes;
            for (const auto&y : x.second) {
                subRes.push_back(strs[y]);
            }
            res.push_back(subRes);
        }
        return res;
    }
};
