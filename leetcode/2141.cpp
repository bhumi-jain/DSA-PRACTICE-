class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long total =0;
        for(long long b: batteries) total+= b;
        long long low=0, high=total/n,ans=0;

        while(low<=high){
            long long mid= (low+high)/2;

            long long usable=0;
            for(long long b: batteries){
                usable+= min(b,mid);
            }
            if(usable>=mid*n){
                ans=mid;
                low=mid+1;
             
            }
            else{
                high= mid-1;
            }
        }
        return ans;
        
    }
};