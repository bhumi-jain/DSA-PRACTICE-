class Solution {
public:
    stack<char>st;
    bool isValid(string s) {
        for(char c:s){
            //don't use s[c], c is character itself
            //if for(int i=0, than index so s[i], means string character at ith index like 0th index )
            if(c=='('|| c=='{'||c=='['){
                st.push(c);
            }
            else{
                if(st.empty())return false; //for the closing bracket
                                            //no opening brak present
                if(st.top()=='('&& c==')'||
                    st.top()=='{'&& c=='}'|| 
                    st.top()=='['&& c==']')
                    {
                        st.pop();
                    }
                else{
                    return false; // for mismatch brackets
                }
            }
        }
        return st.empty(); //after full iteration if stack is not
                           //empty that means some opening brackets
                           //don't have closing ones so invalid
                           //st.empty will return false so as our
                           //function
        
        
    }
};

//T.C =O(N)
//S.C=O(N) Since using stack to store can't be optimised further