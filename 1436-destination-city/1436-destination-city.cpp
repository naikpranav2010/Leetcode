class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> dest;
        string end = paths[0][1];
        
        for(int i = 0; i < paths.size(); i++){
            dest[paths[i][0]] = paths[i][1];
             
            while(dest.find(end) != dest.end()){
                end = dest[end];
            }
        }
        
        return end;
    }
};