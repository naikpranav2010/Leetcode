class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, len = 0, maxlen = 0;
        unordered_map<char, int> umap;
        
        while(j < s.size()){
            while(j < s.size() && (umap.find(s[j]) == umap.end() || !umap[s[j]])){
                umap[s[j]] = 1;
                j++;
            }
            
            len = j - i;
            maxlen = max(maxlen, len);
            
            if(umap.find(s[j]) != umap.end() && umap[s[j]]){
                while(i < j && s[i] != s[j]){
//                     if(umap.find(s[i]) != umap.end()){
//                         umap[s[i]]--;
//                         if(!umap[s[i]])
                            
//                     }
                    umap[s[i]]--;
                    i++;
                }
                
                len = j - i;
                maxlen = max(maxlen, len);
                i++;
                j++;
            }
        }
        
        return maxlen;
    }
};