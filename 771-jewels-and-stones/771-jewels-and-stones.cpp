class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, bool> map;
        int count = 0;
        
        for(int i = 0; i < jewels.size(); i++){
            map[jewels[i]] = true;
        }
        
        for(int i = 0; i < stones.size(); i++){
            if(map.find(stones[i]) != map.end())
                count++;
        }
        
        return count;
    }
};