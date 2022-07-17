class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int len = 0, maxlen = 0, last = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            // if(nums[i])
            // {
            //     // len++;
            //     // maxlen = max(maxlen, len);
            // }
            
            if(!nums[i])
            {
                // if(last == -1)
                //     last = i;
                
                if(k)
                {
                    k--;
                    // len++;
                    // maxlen = max(maxlen, len);
                }
                
                else
                {
                    while(nums[last])
                        last++;
                    last++;
                    len = i - last;
                    // maxlen = max(maxlen, len);
                }
            }
            
            len++;
            maxlen = max(maxlen, len);
        }
        
        return maxlen;
    }
};