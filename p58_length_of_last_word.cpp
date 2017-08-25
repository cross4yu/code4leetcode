class Solution {
    public:
        int lengthOfLastWord(string s)
        {
            int i = 0;
            int tail = s.length() - 1;
            while(tail >= 0 && s[tail] == ' ') --tail;
            while(tail >= 0 && s[tail] != ' ')
            {
                i++; tail--;
            }
            return i;
        }
};
