class Solution {
    public:
        int lengthOfLongestSubString(string s) {
            vector<int> dic(256, -1);
            int maxLen = 0;
            int start = -1;
            for (int i = 0; i < s.length(); ++i)
            {
                if (dic[s[i]] > start) start = dic[s[i]];
                dic[s[i]] = i;
                maxLen = max(maxLen, i - start);
            }
            return maxLen;
        }
};
