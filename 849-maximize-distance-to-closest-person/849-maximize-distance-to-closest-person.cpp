class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int maxdist = 1, first = 0, last = 0, dist = 1;
        
        for(int i = 0; i < seats.size(); i++){
            if(seats[i] == 1){
                first = i;
                break;
            }
        }
        
        maxdist = max(maxdist, first);
        
        for(int i = first + 1; i < seats.size(); i++){
            if(i == seats.size() - 1 && seats[i] == 0){
                return max(maxdist, i - first);
            }
            
            if(seats[i] == 1){
                maxdist = max(maxdist, (i - first) / 2);
                first = i;
            }
        }
        
        return maxdist;
    }
};