class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color == image[sr][sc])
            return image;
        
        flood(image, sr, sc, color, image[sr][sc]);
        
        return image;
    }
    
    void flood(vector<vector<int>>& image, int sr, int sc, int color, int precol){
        if(image[sr][sc] != precol || image[sr][sc] == color)
            return;
        
        image[sr][sc] = color;
        
        if(sr > 0) flood(image, sr - 1, sc, color, precol);
        if(sr < image.size() - 1) flood(image, sr + 1, sc, color, precol);
        if(sc > 0) flood(image, sr, sc - 1, color, precol);
        if(sc < image[0].size() - 1) flood(image, sr, sc + 1, color, precol);

        return;
    }
};