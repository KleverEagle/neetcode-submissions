class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for (const auto& num: nums) {
            if (++mp[num] > 1) return true;
        }
        return false;
    }
};