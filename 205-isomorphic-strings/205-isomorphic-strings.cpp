class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> transform1, transform2;
        
        for(int i = 0; i < s.size(); i++){
            if(transform1.find(s[i]) != transform1.end()){
                if(t[i] - s[i] != transform1[s[i]])
                    return false;
            }
            
            else
                transform1[s[i]] = t[i] - s[i];
            
            if(transform2.find(t[i]) != transform2.end()){
                if(s[i] - t[i] != transform2[t[i]])
                    return false;
            }
            
            else
                transform2[t[i]] = s[i] - t[i];
        }
        
        return true;
    }
};