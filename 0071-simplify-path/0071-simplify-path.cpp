class Solution {
public:
    string simplifyPath(string path) {
        int n = path.size();
        stack<string>st;
        string curr = "";

        for(int i=0; i<=n; i++){
            if(i==n || path[i] == '/'){
                if(curr=="" || curr == "."){

                }else if (curr == ".."){
                    if(!st.empty()){
                        st.pop();
                    }
                }
                else{
                    st.push(curr);
                }
                curr = "";
                }
               else{
                curr += path[i];
               }

            }
    
    string ans = "";
        while (!st.empty()) {
            ans = "/" + st.top() + ans;
            st.pop();
        }

        if (ans.empty())
            return "/";

        return ans;
    }
};