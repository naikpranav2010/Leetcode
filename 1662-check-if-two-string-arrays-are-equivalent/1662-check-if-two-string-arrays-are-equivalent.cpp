class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string s, t;
        int m = w1.size(), n = w2.size();
        int k = max(m, n);
        
        for(int i = 0; i < k; i++)
        {
            if(i < m)
                s.append(w1[i]);
            
            if(i < n)
                t.append(w2[i]);
        }
        
        // cout<<s<<' ';
        // cout<<t<<endl;
        
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        
//         cout<<s<<' ';
//         cout<<t<<endl;
        
        return s == t;        
    }
};