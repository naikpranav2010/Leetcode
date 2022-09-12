class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        
        int carry = (digits[0] + 1) / 10, i = 1;
        
        digits[0] = (digits[0] + 1) % 10;
        
        
        while(carry && i < digits.size()){
            int temp = (digits[i] + carry) % 10;
            carry = (digits[i] + carry) / 10;
            digits[i] = temp;
            i++;
        }
        
        if(carry)
            digits.push_back(1);
        
        reverse(digits.begin(), digits.end());

        return digits;
    }
};