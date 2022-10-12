class Solution {
public:
    int myAtoi(string s) {
        int ans = 0, ptr = 0, isnegative = 1;
        
        while(ptr < s.size() && s[ptr] == ' '){
                ptr++;
        }
        
        if(s[ptr] == '-'){
            isnegative -= 2;
            ptr++;
        }
            
        
        else if(s[ptr] == '+'){
            ptr++;
        }
        
        while(ptr < s.size()){
            if(isdigit(s[ptr])){
                if(ans > INT_MAX / 10 || ans == INT_MAX / 10 && s[ptr] - '0' > 7)
                    return isnegative > 0 ? INT_MAX : INT_MIN;
                
                ans = ans * 10 + (s[ptr] - '0');
                
                ptr++;
            }
            
            else 
                break;
        }
        
        return isnegative * ans;
    }
};