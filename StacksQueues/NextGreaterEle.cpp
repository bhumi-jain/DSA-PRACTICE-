class Solution {
public:
    vector<int> nextLargerElement(vector<int>& arr) {
        stack<int> sk;
        vector<int> result;
        int n = arr.size();

        for (int i = n - 1; i >= 0; i--) {   
            while (!sk.empty() && arr[i] >= sk.top()) {
                sk.pop();
            }

            if (sk.empty()) result.push_back(-1);
            else result.push_back(sk.top());            //instead we can directly enter on correct index result[i], bcz 
                                                        //push back will make it enter at last so need to reverse 

            sk.push(arr[i]);
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
