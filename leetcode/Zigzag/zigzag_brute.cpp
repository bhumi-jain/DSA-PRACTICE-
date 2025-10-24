#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        int n = s.size();
        vector<vector<char>> grid(numRows, vector<char>(n, '\0'));

        int row = 0, col = 0;
        bool goingDown = true;

        for (char c : s) {
            grid[row][col] = c;
            if (goingDown) {
                if (row == numRows - 1) { // turn upward
                    goingDown = false;
                    row--;
                    col++;
                } else {
                    row++;
                }
            } else {
                if (row == 0) { // turn downward
                    goingDown = true;
                    row++;
                } else {
                    row--;
                    col++;
                }
            }
        }

        string ans = "";
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] != '\0')
                    ans += grid[i][j];
            }
        }
        return ans;
    }
};
