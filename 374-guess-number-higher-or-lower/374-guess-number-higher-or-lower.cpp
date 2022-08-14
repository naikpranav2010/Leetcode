/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessnum(int start, int end){
        if(start == end)
            return start;
        
        int mid = start + (end - start) / 2;
        // int res = guess(mid);
        
        if(guess(mid) == 0)
            return mid;
        
        if(guess(mid) == -1)
            return guessnum(start, mid - 1);
        
        if(guess(mid) == 1)
            return guessnum(mid + 1, end);
        
        return 0;
    }
    
    int guessNumber(int n) {
        return guessnum(1, n);
    }
};