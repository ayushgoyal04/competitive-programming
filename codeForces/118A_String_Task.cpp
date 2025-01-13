#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans;
    int len = s.length();
    for(int i=0;i<len;i++){
        if (s[i] >= 'A' && s[i] <= 'Z')
            // Convert uppercase to lowercase
            s[i] = s[i] + 32;
        if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='i'||s[i]=='u'){
                continue;
        }
        ans.push_back('.');
        ans.push_back(s[i]);
    }
    cout<<ans<<endl;
}
