class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string, bool> hash;
        
        for(string str : emails){
            int i = 0;
            bool flag = false;
            string temp = "";
            
            while(i < str.size())
            {
                // cout<<str<<endl;
                if(str[i] == '@')
                {
                    flag = true;
                    // cout<<str[i]<<endl;
                    while(i < str.size())
                    {
                        temp += str[i];
                        i++;
                    }
                    
                    break;
                }
                
                else if(str[i] == '.')
                    i++;
                
                else if(str[i] == '+')
                    while(str[i] != '@')
                        i++;
                
                else
                    temp += str[i++];
                    
            }
            
            // cout<<temp<<endl;
            
           if(flag)
               hash[temp] = true;
        }
        
        return hash.size();
    }
};