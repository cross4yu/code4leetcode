class Solution {
    public:
        int reverse(int x)
        {
            int ret = 0;
            while (x)
            {
                int temp = ret * 10 + x % 10;
                if (temp / 10 != ret)
                    return 0;
                ret = temp;
                x /= 10;
            }
            return (ret > INT_MAX || ret < INT_MIN) ? 0 : ret;
        }
};
