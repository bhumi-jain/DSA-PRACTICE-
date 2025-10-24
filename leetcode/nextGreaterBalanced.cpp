class Solution {
public:
    // helper function to check if a number is numerically balanced
    bool isBalanced(int n) {
        string s = to_string(n);
        vector<int> count(10, 0);

        for (char c : s)
            count[c - '0']++;

        for (int i = 0; i < 10; i++) {
            if (count[i] != 0 && count[i] != i)
                return false;
        }
        return true;
    }

    // main function that returns the next balanced number
    int nextBeautifulNumber(int n) {
        int num = n + 1;
        while (true) {
            if (isBalanced(num))
                return num; // return integer result
            num++;
        }
    }
};
