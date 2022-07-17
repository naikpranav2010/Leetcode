class Solution {
public:
    string reversePrefix(string word, char ch) {
        for(int i = 0; i < word.size(); i++){
            if(word[i] == ch)
                return reverse(word, 0, i);
        }
        
        return word;
    }
    
    string reverse(string &word, int i, int j){
        if(i >= j)
            return word;
        
        else{
            swap(word[i], word[j]);
            return reverse(word, i + 1, j - 1);
        }
    }
};