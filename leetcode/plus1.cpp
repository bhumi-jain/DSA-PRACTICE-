class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int n = digits.size();

    // Start from the last digit and handle carry
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;   // add 1 and done
            return digits;
        }
        digits[i] = 0;  // if digit is 9, make it 0 and carry 1 
                        //to next
    }
     digits.insert(digits.begin(), 1);
     return digits;
    }
};