class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
         int total = 0, prev = 0;
        for (string row : bank) {
            int curr = count(row.begin(), row.end(), '1');
            if (curr > 0) {
                total += prev * curr;
                prev = curr;
            }
        }
        return total;
        
    }
};