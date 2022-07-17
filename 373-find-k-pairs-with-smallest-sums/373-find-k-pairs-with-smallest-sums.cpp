class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int, pair<int, int>>> pq;
        bool lag = false;
        
        for(int i : nums1)
        {
            // if(pq.size() > k && i + nums2[0] > pq.top().first)
            //     break;
                
            for(int j : nums2)
            {
                if(pq.size() < k)
                 pq.push({(i + j), {i, j}});
                
                else if(pq.top().first > (i + j))
                {
                    pq.pop();
                    pq.push({(i + j), {i, j}});
                }
                
                else if(pq.top().first < (i + j))
                    break;
            }
        }
        
        while(k){
            if(pq.empty())
                break;
            vector<int> temp;
            temp.push_back(pq.top().second.first);
            temp.push_back(pq.top().second.second);
            ans.push_back(temp);
            pq.pop();
            k--;
        }
        
        return ans;
    }
};