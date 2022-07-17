class Solution {
public:
    int romanToInt(string s) {
//         vector<pair<int, string>> m({{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}});
        
        int ans = 0, n = s.size();
        
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'M')
                ans += 1000;
            
            else if(s[i] == 'D')
                ans += 500;
            
            else if(s[i] == 'C')
            {
                if(i < n - 1 && s[i + 1] == 'M')
                {
                    ans += 900;
                    i++;
                }
                
                else if(i < n - 1 && s[i + 1] == 'D')
                {
                    ans += 400;
                    i++;
                }
                
                else
                    ans += 100;
            }
            
            else if(s[i] == 'L')
                ans += 50;
            
            else if(s[i] == 'X')
            {
                if(i < n - 1 && s[i + 1] == 'C')
                {
                   ans += 90;
                    i++;
                }
                
                else if(i < n - 1 && s[i + 1] == 'L')
                {
                    ans += 40;
                    i++;
                }
                
                else
                    ans += 10;
            }
            
            else if(s[i] == 'V')
                ans += 5;
            
            else if(s[i] == 'I')
            {
                if(i < n - 1 && s[i + 1] == 'X')
                {
                    ans += 9;
                    i++;
                } 
                
                else if(i < n - 1 && s[i + 1] == 'V')
                {
                    ans += 4;
                    i++;
                }
                
                else
                    ans += 1;
            }
        }   
        
        return ans;
    }
};