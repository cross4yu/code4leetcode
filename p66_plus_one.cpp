class Solution2 {
    public:
        vector<int> plusOne(vector<int>& digits)
        {
            int n = digits.size();
            bool flag = true;
            for (auto i = digits.size()-1; i >= 0 && flag; --i)
                flag = ((++digits[i]%=10) == 0);
            if (flag)
                digits.insert(digits.begin(), 1);
            return digits;
        }
};


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c=1, s=0;
        for (int i=digits.size()-1; i>=0; i--)
            digits[i] = ((s = digits[i]+c) <= 9) ? (c=0, s) : (c=1, 0);
        if (c > 0) digits.insert(digits.begin(), c);
        return digits;
    }
};
