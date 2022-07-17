class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int> s1, s2, ans;
        
        for(int x : nums1)
            s1.insert(x);
        
        for(int x : nums2){
            if(s1.find(x) != s1.end())
                ans.insert(x);
            
            s2.insert(x);
        }
        
        for(int x : nums3)
            if(s1.find(x) != s1.end() || s2.find(x) != s2.end())
                ans.insert(x);
        
        vector<int> vec;
        
        for(auto x : ans)
            vec.push_back(x);
        
        return vec;
    }
};