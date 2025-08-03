class Solution {
public:
    bool isValid(string s) {
        int l = s.length();
        stack<char> st;
        for(int i = 0; i < l; i++){
            if(s[i] == '(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(st.size()<1){
                    return false;
                }else {
                    if(st.top() == '('){
                        st.pop();
                    }else{
                        st.push(s[i]);
                    }
                }
            }
            else if(s[i]==']'){
                if(st.size()<1){
                    return false;
                }else {
                    if(st.top() == '['){
                        st.pop();
                    }else{
                        st.push(s[i]);
                    }
                }
            }
            else if(s[i]=='}'){
                if(st.size()<1){
                    return false;
                }else {
                    if(st.top() == '{'){
                        st.pop();
                    }else{
                        st.push(s[i]);
                    }
                }
            }
        }
        if(st.size()>0){
            return false;
        }
        return true;
    }
};