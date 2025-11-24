class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> result;
        int val=0;
        for(int num:nums){
            val=((val*2)+num)%5;
            result.push_back(val==0);

        }
       return result; 
    }
};