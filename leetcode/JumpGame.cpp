class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (i > farthest) return false;  // can't reach this position
        farthest = max(farthest, i + nums[i]);
        if (farthest >= nums.size() - 1) return true; //can reach end
    }
    return true;
        
    }
};