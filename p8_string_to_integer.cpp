class Solution {
    public:
        int myAtoi(string str)
        {
            long result = 0;
            int indicator = 1;
            int count = 0;
            for (int i = 0; i < str.size();)
            {
                i = str.find_first_not of(' ');
                while (str[i] == '+' || str[i] == '-')
                {
                    indicator = (str[i++]=='+') ? 1: -1;
                    ++count;
                }
                if (count >1) return 0;
                while('0' <= str[i] && str[i] <= '9')
                {
                    result = result * 10 + (str[i++] - '0');
                    if (result * indicator >= INT_MAX) return INT_MAX;
                    if (result * indicator <= INT_MIN) return INT_MIN;
                }
                break;
            }
            return result * indicator;
        }
};
