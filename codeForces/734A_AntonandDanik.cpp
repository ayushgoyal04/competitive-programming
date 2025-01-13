#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A') c1++;
        if(s[i]=='D') c2++;
    }
    if(c1==c2) cout<<"Friendship"<<endl;
    if(c1>c2) cout<<"Anton"<<endl;
    if(c1<c2) cout<<"Danik"<<endl;
    return 0;

}
