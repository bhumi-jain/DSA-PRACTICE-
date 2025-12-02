class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
       

        const int MOD = 1e9 + 7;
        
        unordered_map<int, long long> yFreq;
        for (const auto& point : points) {
            yFreq[point[1]]++;
        }
        
        long long totalPairs = 0;
        long long sumOfSquares = 0;
        
        for (const auto& [y, freq] : yFreq) {
            if (freq >= 2) {
                long long pairs = (freq * (freq - 1)) / 2;
                totalPairs = (totalPairs + pairs) % MOD;
                sumOfSquares = (sumOfSquares + (pairs * pairs) % MOD) % MOD;
            }
        }
        
        long long result = ((totalPairs * totalPairs % MOD - sumOfSquares + MOD) % MOD * 500000004) % MOD;
        
        return result;
        
    }
};