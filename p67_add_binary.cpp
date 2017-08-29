class Solution {
    public:
        string addBinary(string a, string b)
        {
            string ret = "";
            int flag = 0;
            int i = a.size() - 1;
            int j = b.size() - 1;
            while (i >= 0 || j >= 0 || flag== 1)
            {
                flag += i >= 0 ? a[i--] - '0' : 0;
                flag += j >= 0 ? b[j--] - '0' : 0;
                ret = char(flag % 2 + '0') + ret;
                flag /= 2;
            }
            return ret;
        }
};
