//LC= 2654

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ones = 0;
        for (int x : nums) if (x == 1) ++ones;
        if (ones > 0) return n - ones;

        int bestLen = INT_MAX;
        for (int i = 0; i < n; ++i) {
        int g = nums[i];
        if (g == 1) { bestLen = 1; break; }
        for (int j = i + 1; j < n; ++j) {
            g = std::gcd(g, nums[j]);
            if (g == 1) {
                bestLen = min(bestLen, j - i + 1);
                break; // no need to extend this i further
            }
        }
    }

    if (bestLen == INT_MAX) return -1; // no subarray has gcd 1
    return n + bestLen - 2;
}

        
    
};