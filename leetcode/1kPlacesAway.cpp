// Given an binary array nums and an integer k, return true if all 1's are at least 
// k places away from each other, otherwise return false.

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int last = -1;  // stores index of last seen 1

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                if (last != -1 && i - last - 1 < k) {
                    return false;
                }
                last = i; // update last position of 1
            }
        }
        return true;
    }
};