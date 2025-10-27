class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
         vector<int> active;
        for (auto &row : bank) {
            int cnt = count(row.begin(), row.end(), '1');
            if (cnt > 0) active.push_back(cnt);
        }

        int total = 0;
        for (int i = 1; i < active.size(); i++)
            total += active[i] * active[i - 1];
            return total;
        
    }
};