class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n = m.size();
        
        for(int i = 0; i <= (n - 1) / 2; i++){
            int ri = i, rf = n - i - 1, ci = i, cf = n - i - 1, temp;
            if(ri >= rf || ci >= cf)
                break;
            for(int j = 0; j < rf - ri; j++){
                temp = m[ri][ci + j];
                m[ri][ci + j] = m[rf - j][ci];
                m[rf - j][ci] = m[rf][cf - j];
                m[rf][cf - j] = m[ri + j][cf];
                m[ri + j][cf] = temp;
                // cout<<m[ri][ci + j]<<endl;
                // cout<<m[rf - j][ci]<<endl;
                // cout<<m[rf][cf - j]<<endl;
                // cout<<m[ri + j][cf]<<endl;

            }
        }
        
        return;
    }
};