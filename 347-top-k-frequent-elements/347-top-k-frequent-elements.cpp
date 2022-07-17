class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> map;
        priority_queue<pair<int, int>> heap;
        
        for(int i : nums)
        {
            if(map.find(i) != map.end())
                map[i]++;
            
            else
                map[i] = 1;
        }
        
        for(auto i : map)
            heap.push({i.second, i.first});
        
        // ans.push_back(heap.top().second);
        // heap.pop();
        
        while(ans.size() < k)
        {
            ans.push_back(heap.top().second);
            heap.pop();
        }
        
//         vector<int> temp;
        
//         for(int i : ans)
//             temp.push_back(i);
        
        return ans;
    }
};