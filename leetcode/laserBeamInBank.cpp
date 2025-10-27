#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int m = bank.size();
        vector<int> devices(m);
        for (int i = 0; i < m; i++)
            devices[i] = count(bank[i].begin(), bank[i].end(), '1');

        int total = 0;
        for (int i = 0; i < m; i++) {
            if (devices[i] == 0) continue;
            for (int j = i + 1; j < m; j++) {
                if (devices[j] == 0) continue;
                bool valid = true;
                for (int k = i + 1; k < j; k++)
                    if (devices[k] > 0) valid = false;
                if (valid) total += devices[i] * devices[j];
                break; // stop at first non-empty row
            }
        }
        return total;
    }
};
