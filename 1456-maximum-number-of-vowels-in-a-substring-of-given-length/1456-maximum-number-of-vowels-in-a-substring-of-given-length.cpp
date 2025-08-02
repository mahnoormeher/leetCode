class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int maxCount = 0, currentCount = 0;
        for (int i = 0; i < k; ++i) {
            if (vowels.count(s[i]))
             currentCount++;
        }
        maxCount = currentCount;
        for (int i = k; i < s.size(); ++i) {
            if (vowels.count(s[i]))
             currentCount++;
            if (vowels.count(s[i - k]))
             currentCount--;
            maxCount = max(maxCount, currentCount);
        }
        return maxCount;
    }
};
