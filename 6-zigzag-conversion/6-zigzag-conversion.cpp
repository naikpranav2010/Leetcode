class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        
        vector<string> arr(numRows);
        
        int i = 0, k = 0;
        bool flag = true;
        string ans;
        
        while(i < s.size()){
            if(flag){
                arr[k++].push_back(s[i]);
            }
            
            if(!flag){
                arr[k--].push_back(s[i]);
            }
            
            if(k == numRows){
                flag = false;
                k -= 2;
            }
            
            if(k == -1){
                flag = true;
                k += 2;
            }
            
            i++;
        }
        
        for(int j = 0; j < numRows; j++)
            ans += arr[j];
        
        return ans;
    }
};