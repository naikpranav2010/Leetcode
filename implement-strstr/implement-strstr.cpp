class Solution {
public:
    int strStr(string haystack, string needle) {
        queue<char> hs, nd;
        int h = haystack.size(), n = needle.size();
        
        for(auto i : needle){
            nd.push(i);
        }
        
        for(int i = 0; i < n; i++){
            hs.push(haystack[i]);
        }
        
        if(nd == hs)
            return 0;
        
        for(int i = 1; i < h - n + 1; i++){
            hs.pop();
            hs.push(haystack[i + n - 1]);
            
            if(hs == nd)
                return i;
        }
        
        return -1;
    }
};