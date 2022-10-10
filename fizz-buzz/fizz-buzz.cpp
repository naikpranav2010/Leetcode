class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        
        for(int i = 1; i <= n; i++){
            string s;
            
            if(!(i % 3))
                s += "Fizz";
            
            if(!(i % 5))
                s += "Buzz";
            
            if(s.size() == 0)
                s += to_string(i);
            
            ans.push_back(s);
        }
        
        return ans;
    }
};