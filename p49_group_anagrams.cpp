class Solution {
    public:
        vector<vector<string> > groupAnagrams(vector<string>& strs)
        {
            vector<vector<string> > result;
            unordered_map<string, multiset<string> > mp;
            for (string s : strs)
            {
                string temp = s;
                sort(temp.begin(), temp.end());
                mp[temp].insert(s);
            }
            for (auto m : mp)
            {
                vector<string> ag (m.second.begin(), m.second.end());
                result.push_back(ag);
            }
            return result;
        }
};
