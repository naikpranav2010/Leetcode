class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int a = INT_MAX, b = INT_MAX, c = INT_MIN, d = INT_MIN;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < a)
            {
                b = a;
                a = nums[i];
        //         cout<<a<< endl;
        // cout<<b<< endl;
        // cout<<c<< endl;
        // cout<<d<< endl;
            }
            
             else if(nums[i] < b)
                {b = nums[i];
        //         cout<<a<< endl;
        // cout<<b<< endl;
        // cout<<c<< endl;
        // cout<<d<< endl;
                }
            
             if(nums[i] > c)
            {
                d = c;
                c = nums[i];
        //         cout<<a<< endl;
        // cout<<b<< endl;
        // cout<<c<< endl;
        // cout<<d<< endl;
            }
            
             else if(nums[i] > d)
                {d = nums[i];
        //         cout<<a<< endl;
        // cout<<b<< endl;
        // cout<<c<< endl;
        // cout<<d<< endl;
                }
            
            // cout<<endl;
        }
        
        // cout<<a<< endl;
        // cout<<b<< endl;
        // cout<<c<< endl;
        // cout<<d<< endl;
        
        // long long int w = c * d, v = a * b;
        
        // cout<<w<< endl;
        // cout<<v<< endl;
        
            
        return c * d - a * b;
        // return 0;
    }
};