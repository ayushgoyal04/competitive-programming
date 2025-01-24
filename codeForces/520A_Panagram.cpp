#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    set<char> st;
    for(char c:s)
        st.insert(c);
    if(st.size()==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;

}

