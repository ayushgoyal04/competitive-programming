#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.length();
    int flag = 0;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(s[i]=='+'){
            flag = 1;
        }
        else{
            int temp = s[i]- '0';
            v.push_back(temp);


        }
    }
    sort(v.begin(), v.end());
    if(flag ==0){
        cout<<v[0]<< endl;

    }
    else{
        for(int i=0;i<v.size()-1;i++){
            cout<<v[i]<<"+";

        }
        cout<<v[v.size()-1];
    }
}