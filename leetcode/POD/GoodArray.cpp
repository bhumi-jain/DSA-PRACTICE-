class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();

        //checking for 1 to n-1
        for(int i=0;i<n-1;i++){
            if(nums[i]!=i+1){
                return false;
            }
        }

        //checking last element should repeat
        return nums[n-1]==n-1;
        
    }
};