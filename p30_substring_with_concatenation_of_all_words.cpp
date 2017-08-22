class Solution {
    public:
        vector<int> findSubstring(string s, vector<string>& words)
        {
            unordered_map<string, int> counts;
            vector<int> result;
            for (string word : words) counts[word]++;
            int num = words.size();
            int len = words[0].length();
            for (auto i = 0; i < s.length() - num * len + 1; ++i)
            {
                unordered_map<string, int> record;
                int flag = 0;
                for (; flag < num; ++ flag)
                {
                    string word = s.subsrt( i + flag * len, len);
                    if ( counts.find(word) != counts.end())
                    {
                        record[word]++;
                        if (record[word] > counts[word]) break;
                    }
                    else break;
                }
                if (mark == num) result.push_back(i);
            }
            return result;
        }
};
