class Solution {
    public:
        int divide(int dividend, int divisor)
        {
            if (divisor == 0 || (dividend == INT_MIN && divisor == -1))
                return INT_MAX;
            int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
            long long divd = labs(dividend);
            long long divr = labs(divisor);
            int res = 0;
            while (divd >= divr)
            {
                long long temp = divr, count = 1;
                while (divd >= (temp<<1))
                {
                    temp <<= 1;
                    count <<= 1;
                }
                divd -= temp;
                res += count;
            }
            return sign == 1 ? res : -res;
        }
};
