class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string result = "";
        string token;
        for (int i = 0; i <= path.length(); i++) {
            if (i == path.length() || path[i] == '/') {
                if (token == "" || token == ".") {
 
                } 
                else if (token == "..") {
                    if (!st.empty()) st.pop();
                } 
                else {
                    st.push(token);
                }
                token = "";
            } else {
                token += path[i];
            }
        } 
         while (!st.empty()) {
            result = "/" + st.top() + result;
            st.pop();
        }
        return result.empty() ? "/" : result;
        
    }
};