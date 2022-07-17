class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> alpha(26, false);
        int ans = 0;
        
        for(int i = 0; i < allowed.size(); i++){
            alpha[allowed[i] - 'a'] = true;

        }
        
        // cout<<temp<<endl;
        
        for(int i = 0; i < words.size(); i++){
            // int count = 0;
            // cout<<words[i];
            
            bool flag = true;
            
            for(int j = 0; j < words[i].size(); j++){
                // if(alpha[words[i][j] - 'a'][0] && !alpha[words[i][j] - 'a'][1]){
                //     alpha[words[i][j] - 'a'][1] = true;
                //     count++;
                //     cout<<words[i][j]<<' ';
                // }
                if(!alpha[words[i][j] - 'a'])
                    flag = false;
            }
            
            // for(int j = 0; j < allowed.size(); j++){
            //     if(!alpha[allowed[j] - 'a'])
            //         flag = false;
            // }
            
            if(flag)
                ans++;
            
            // for(int j = 0; j < 26; j++)
            //     alpha[j] = false;
        }
        
        return ans;
    }
};