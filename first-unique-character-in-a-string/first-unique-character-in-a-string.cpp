class Solution {
public:
    int firstUniqChar(string s) {
        queue<int> qchar;
        vector<int> alpha(26, 0);
        
        for(int i = 0; i < s.size(); i++){
            if(alpha[s[i] - 'a'] == 0)
                qchar.push(i);
            
            alpha[s[i] - 'a']++;
        }
        
        while(!qchar.empty()){
            if(alpha[s[qchar.front()] - 'a'] == 1)
                return qchar.front();
            else
                qchar.pop();
        }
        
        return -1;
    }
};