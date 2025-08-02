class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int total = 1 << k; 
        unordered_set<string> seen;
        int n = s.size();
        if (n < k) return false;
        for (int i = 0; i <= n - k; ++i) {
            string window = s.substr(i, k);
            seen.insert(window);
            if (seen.size() == total) return true;
        }
        return seen.size() == total;
    }
};
