class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> st; //better time complexity

        //storing all prefixes of arr1 so that we can compare it later on

        for(int num:arr1){      //for each looop for checking
            while(num>0){
                st.insert(num);
                num=num/10; // every time we are removing the last digit
            
            }
        }
        int ans=0; // for longest length

        for(int num: arr2){

            while(num>0){
                if(st.count(num)){  //if num is present in it or not

                int len= to_string(num).length();  //converting it into a string so that we can apply length function

                ans= max(ans,len);

                }

                num=num/10;
            }

        }
        return ans;
        
    }
};