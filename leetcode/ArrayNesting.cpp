class Solution {
public:
    int arrayNesting(vector<int>& nums) {
         int n = nums.size();
        vector<bool> visited(n, false);
        int maxLen = 0;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                int current = i;
                int count = 0;

                while (!visited[current]) {
                    visited[current] = true;
                    current = nums[current];
                    count++;
                }

                maxLen = max(maxLen, count);
            }
        }

        return maxLen;
        
    }
};