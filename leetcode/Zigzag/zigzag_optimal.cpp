#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        string res = "";
        int n = s.size();
        int cycle = 2 * numRows - 2;

        for (int row = 0; row < numRows; row++) {
            for (int j = row; j < n; j += cycle) {
                res += s[j]; // main vertical char
                int diag = j + cycle - 2 * row; // diagonal element
                if (row != 0 && row != numRows - 1 && diag < n)
                    res += s[diag];
            }
        }
        return res;
    }
};
