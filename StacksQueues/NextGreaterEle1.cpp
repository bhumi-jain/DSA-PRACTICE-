class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;  //ELE,NGE
        stack<int> sk;
        vector<int> ans;
        for(int i=nums2.size()-1;i>=0;i--){
            while(sk.size()>0 && sk.top()<=nums2[i]){
                sk.pop();
            }
            if(sk.empty()) mpp[nums2[i]]=-1;
            else{
                mpp[nums2[i]]=sk.top();

            }
            

            sk.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            ans.push_back(mpp[nums1[i]]);
        }

        return ans;
    }
};