class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        
        int i = 0, j = 0, steps = 0;
        
        while(i < students.size()){
            if(students[i] == seats[j])
            {
                i++;
                j++;
                continue;
            }
                    
            steps += abs(students[i++] - seats[j++]);
        }
        
        return steps;
    }
};