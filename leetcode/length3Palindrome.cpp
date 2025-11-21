class Solution {
public:
    int countPalindromicSubsequence(string s) {
         int n = s.size();

        // First and last occurrence of every character
        vector<int> first(26, -1), last(26, -1);

        for (int i = 0; i < n; ++i) {
            int c = s[i] - 'a';
            if (first[c] == -1) first[c] = i;
            last[c] = i;
        }

        int ans = 0;

        // For each character as outer char 'a'
        for (int a = 0; a < 26; ++a) {
            if (first[a] == -1) continue;   // doesn't exist

            int L = first[a];
            int R = last[a];

            if (R - L < 2) continue; // no space for middle char

            // count unique chars between L and R
            vector<int> middle(26, 0);
            for (int i = L + 1; i < R; ++i) {
                middle[s[i] - 'a'] = 1;
            }

            ans += accumulate(middle.begin(), middle.end(), 0);
        }

        return ans;
        
    }
};