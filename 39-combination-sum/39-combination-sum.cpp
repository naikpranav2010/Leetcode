class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> comp;
        sort(candidates.begin(), candidates.end());
        pop(candidates, target, ans, comp, 0);
        
        return ans;
    }
    
    void pop(vector<int>& candidates, int target, vector<vector<int>> &ans, vector<int> &comp, int k){
        if(!target){
            ans.push_back(comp);
            return;
        }
        
        for(int i = k; i < candidates.size(); i++){
            if(candidates[i] > target)
                break;
            
            comp.push_back(candidates[i]);
            pop(candidates, target - candidates[i], ans, comp, i);
            comp.pop_back();
        }
        
        return;
    }
};