class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> temp(1, 0);
        
        populate(graph, ans, temp, 0);
            
            return ans;
    }
    
    void populate(vector<vector<int>> &graph, vector<vector<int>> &ans, vector<int> &temp, int i){     
        if(graph.size() == i + 1){
            ans.push_back(temp);
            return;
        }
        
        if(!graph[i].size()){
            return;
        }
        
        for(int j = 0; j < graph[i].size(); j++){
            temp.push_back(graph[i][j]);
            populate(graph, ans, temp, graph[i][j]);
            temp.pop_back();
        }
        
        return;
    }
};