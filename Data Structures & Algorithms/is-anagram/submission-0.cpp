class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freqS;
        unordered_map<char, int> freqT;
        for (const auto&x: s) {
            freqS[x]++;
        }
        for (const auto&x: t) {
            freqT[x]++;
        }
        // For All elements
        for (int i = static_cast<int>('a'); i <= static_cast<int>('z'); i++) {
            if (freqS[static_cast<char>(i)] != freqT[static_cast<char>(i)]) {
                return false;
            }
        }
        return true;
    }
};
