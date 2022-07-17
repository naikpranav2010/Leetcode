class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        
        return merge(intervals);
    }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int first = intervals[0][0], second = intervals[0][1];
        vector<vector<int>> new_intervals;
        
        for(int i = 1; i < intervals.size(); i++)
        {
            if(intervals[i][0] > second)
            {
                new_intervals.push_back({first, second});
                first = intervals[i][0];
                second = intervals[i][1];
            }
            
            else
                second = max(second, intervals[i][1]);
        }
        
        new_intervals.push_back({first, second});
        
        return new_intervals;
    }
};