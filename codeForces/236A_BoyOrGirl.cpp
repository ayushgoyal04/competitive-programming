#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int n= s.length();
    
int flag = 0;
    sort(s.begin(), s.end());
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            flag++;
        }
    }
    n = n-flag;

    if(n%2==0){ 
        cout<<"CHAT WITH HER!"<<endl;
    }
    else cout<<"IGNORE HIM!"<<endl;
    
    }