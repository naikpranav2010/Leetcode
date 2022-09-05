class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size() < 10){
           return {};
        }

        string t = s.substr(0, 10);
        unordered_map<string, int> umap;
        vector<string> ans;
        int j = 10;
        
        umap[t] = 1;
        
        while(j < s.size()){
            t += s[j];
            t.erase(0, 1);
            
//             if(umap.find(t) != umap.end()){
//                 umap[t]++;
//                 if(umap[t] == 2)
//                     ans.push_back(t);
//             }
            
//             else
//                 umap[t] = 1;
            
//             j++;
            umap[t]++;
            j++;
        }
        
        for(auto i : umap){
            if(i.second > 1)
                ans.push_back(i.first);
        }
        
        return ans;
    }
};