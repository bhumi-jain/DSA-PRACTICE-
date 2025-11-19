class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(find(nums.begin(),nums.end(),original)!=nums.end()){
            //bcz find is an iterator and it points to ele
            original=2*original;
        }
        return original;
        
    }
};