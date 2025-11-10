//MINIMUM OPERATIONS TO CONVERT ALL ELEMENTS TO ZERO

class Solution {
public:
    int minOperations(vector<int>& nums) {
        long long ops = 0;
        vector<int> st; // use vector as stack

        for (int x : nums) {
        if (x == 0) {
            // finish current segment: each active value needs one op
            ops += st.size();
            st.clear();
            continue;
        }

        // remove all active values greater than x
        while (!st.empty() && st.back() > x) {
            ops++;
            st.pop_back();
        }

        // if top equals x, nothing to do (already active)
        if (st.empty() || st.back() < x) {
            st.push_back(x);
        }
    }

    // remaining active values at the end each require one op
    ops += st.size();
    return ops;
        
    }
};