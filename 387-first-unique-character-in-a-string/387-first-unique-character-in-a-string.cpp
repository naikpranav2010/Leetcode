class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> map;
        // char ans;
        // int count = -1;
        
        for(int i = s.size() - 1; i >= 0; i--){
//             if(map.find(s[i]) == map.end()){
//                 ans = s[i];
//                 count = i;
//                 map[s[i]] = 1;
//             }
            
//             else
//                 map[s[i]]++;
            map[s[i]]++;
        }
        
        // if(map[ans] == 1)
        //     return count;
        
        for(int i = 0; i < s.size(); i++){
            if(map[s[i]] == 1)
                return i;
        }
        
        return -1;
    }
};