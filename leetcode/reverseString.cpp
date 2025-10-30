class Solution {
public:
     void mySwap(char &a, char &b) {
        char temp = a;
        a = b;
        b = temp;
    }
    void reverseString(vector<char>& s) {
            int left = 0;
            int right = s.size() - 1;

            while (left < right) {
            mySwap(s[left], s[right]);
            left++;
            right--;
        }
        
    }
};