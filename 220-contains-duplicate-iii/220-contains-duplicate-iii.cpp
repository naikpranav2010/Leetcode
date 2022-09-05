class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        vector<pair<long long int, int>> map;
        
        for(int i = 0; i < nums.size(); i++){
            map.push_back({nums[i], i});
        }
        
        sort(map.begin(), map.end());
        
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(abs(map[i].first - map[j].first) <= t){
                    if(abs(map[i].second - map[j].second) <= k)
                        return true;
                }
                
                else 
                    break;
            }
        }
        
        return false;;
    }
};