class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right = 0, maxCount = 0, maxLength = 0;
        vector<int> count(26, 0);
        for (right = 0; right < s.length(); right++) {
            count[s[right] - 'A']++;
            maxCount = max(maxCount, count[s[right] - 'A']);
            if ((right - left + 1) - maxCount > k) {
                count[s[left] - 'A']--;
                left++;
            }
            maxLength = max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};
