class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m = image.size(), n = image[0].size();
        // vector<vector<int>> ans(m, vector<int>(n));
        
        if(image[sr][sc] != newColor)
            populate(image, sr, sc, newColor, image[sr][sc]);            
        
        return image;
    }
    
    void populate(vector<vector<int>> &image, int sr, int sc, int newColor, int originalColor){
        if(sr < 0 || sr >= image.size())
            return;
        if(sc < 0 || sc >= image[0].size())
            return;
        
        if(image[sr][sc] == originalColor){
            image[sr][sc] = newColor;
            
            populate(image, sr + 1, sc, newColor, originalColor);
            populate(image, sr - 1, sc, newColor, originalColor);
            populate(image, sr, sc + 1, newColor, originalColor);
            populate(image, sr, sc - 1, newColor, originalColor);
        }
            
        return;
    }
};