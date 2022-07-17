class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int x;
        
        for(int i : stones)
            pq.push(i);
        
        while(pq.size() != 1)
        {
            int x = pq.top();
            pq.pop();
            
            int y = pq.top();
            pq.pop();
            
            pq.push(abs(x - y));
        }
        
        x = pq.top();
        pq.pop();
        
        return x;
    }
};