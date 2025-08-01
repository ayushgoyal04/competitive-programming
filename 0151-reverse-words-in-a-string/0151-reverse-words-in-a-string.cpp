class Solution {
public:
    // int nextch(string s, int curr){
    //     while(s[curr]==" "){
    //         curr++;
    //     }
    //     return curr;
    // }

    string reverseWords(string s) {
        vector<string> v;
        string temp = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i]!=' '){
                temp += s[i];
            }
            else{
                if(!temp.empty()){
                    v.push_back(temp);
                    temp = "";
                }
            }
        }
            if(!temp.empty()){
                    v.push_back(temp);
                    temp = "";
                }
        string ans = "";
        for(int i = v.size()-1; i>0; i--){
            ans += v[i];
            ans+=" ";
        }       
        ans=ans+v[0];
        return ans;
    }
};