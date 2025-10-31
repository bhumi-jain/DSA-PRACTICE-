class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
    int n = nums.size() - 2;
    int xor_all = 0;

    // XOR all numbers in nums and from 0 to n-1
    for (int x : nums) xor_all ^= x;
    for (int i = 0; i < n; i++) xor_all ^= i;

    // Get rightmost set bit
    int bit = xor_all & -xor_all;

    int a = 0, b = 0;
    // Divide numbers into two groups and XOR
    for (int x : nums)
        (x & bit ? a : b) ^= x;
    for (int i = 0; i < n; i++)
        (i & bit ? a : b) ^= i;

    return {a, b};
        
    }
};