class Solution {
    public:
        int numDecodings(string s)
        {
            int n = s.size();
            if ( n == 0 || s[0] == '0') return 0;
            if ( n == 1) return 1;
            int res = 0, n1 = 1 , n2 = 1;
            for (int i = 1; i < n; ++i)
            {
                int temp = n1;
                if ( isValid(s[i]) && isValid(s[i-1],s[i]))
                    res+=  n1+n2;
                if (!isValid(s[i]) && isValid(s[i-1],s[i]))
                    res += n2;
                if ( isValid(s[i]) && !isValid(s[i-1],s[i]))
                    res += n1;
                if (!isValid(s[i]) && !isValid(s[i-1],s[i]))
                    return 0;
                n1 = res;
                n2 = temp;
                res = 0;
            }
            return n1;
        }

        bool isValid (char a, char b)
        {
            return a == '1' || (a == '2' && b <= '6' && b >= '0');
        }
        bool isValid (char a)
        {
            return a > '0' && a <= '9';
        }
};
