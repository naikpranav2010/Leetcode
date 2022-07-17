class Solution {
public:
//     int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//         sort(intervals.begin(), intervals.end());
//         int second = intervals[0][1], count = 0, temp = 0;
        
//         for(int i = 0; i < intervals.size(); i++){
//             cout<<intervals[i][0]<<',';
//             cout<<intervals[i][1]<<' ';
//         }
//         cout<<endl;
//         for(int i = 1; i < intervals.size(); i++){
//             if(intervals[i][0] < second)
//             {
//                 cout<<intervals[i][0]<<' ';
//                 count++;
//             }
                
//             else
//                 second = max(second, intervals[i][1]);
//         }
        
//         return count;
//     }
    
//     bool mysort(vector<int> int1, vector<int> int2){
//         if(int1[0] < int2[0])
//             return true;
        
//         else if(int1[0] > int2[0])
//             return false;
        
//         else
//         {
//             if(int1[1] < int2[1])
//                 return true;
            
//             else if(int1[1] >= int2[1])
//                 return false;
//         }
        
//         return true;
//     }
    static bool sortbysec(vector<int>&a, vector<int>&b)
    {
        return a[1] < b[1] ? true : false;
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), sortbysec);
        
        auto prev = intervals[0];
        int ans = 1;
        
        for(int i=1;i<intervals.size();++i)
        {
            if(intervals[i][0] >= prev[1])
            {
                prev = intervals[i];
                ans++;
            }
        }
        return intervals.size() - ans;
    }
};