#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%447==0 || n%474==0 || n%477==0 || n%744==0 || n%747==0 || n%774==0 || n%777==0 || n%444==0){
        cout<<"YES";
        return 0;
    }
    string s = to_string(n);
    for(int i=0; i<s.size(); i++){
        if(s[i]!='4' && s[i]!='7'){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
