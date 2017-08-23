class Solution {
    string multiply(string num1, string num2) {
    string sum(num1.size() + num2.size(), '0');

    for (int i = num1.size() - 1; 0 <= i; --i) {
        int carry = 0;
        for (int j = num2.size() - 1; 0 <= j; --j) {
            int tmp = (sum[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0') + carry;
            sum[i + j + 1] = tmp % 10 + '0';
            carry = tmp / 10;
        }
        sum[i] += carry;
    }

    size_t startpos = sum.find_first_not_of("0");
    if (string::npos != startpos) {
        return sum.substr(startpos);
    }
    return "0";
}
};



class Solution2 {                                     
    public:                                          
        string multiply(string num1, string num2) 
        {                                            
            string sum(num1.size() + num2.size(), '0');
            int sumi[num1.size() + num2.size()];  
            for(auto i = 0; i< num1.size()+num2.size();++i) sumi[i]= 0;
            for (int i = num1.size()-1; i >= 0; --i)
            {                                        
                for (int j = num2.size()-1;j >=0; --j)                                                                               
                {                                    
                    int mul = (num1[i]-'0') * (num2[j]-'0');
                    int p = i + j;                   
                    int q = i + j + 1;               
                    int s = mul + sumi[q];           
                    sumi[p] += s / 10;               
                    sumi[q] = s % 10;                
                }                                    
            }                                        
            for (auto k = 0; k < sum.size(); ++k) 
            sum[k] = sumi[k] + '0';                  
        auto startpos = sum.find_first_not_of("0");
        if (string::npos != startpos)
            return sum.substr(startpos);
        return "0";                                  
        }                                            
}; 

