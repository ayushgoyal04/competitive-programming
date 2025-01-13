#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    int t;
    cin>>t;
    while(t--){
        cin>>word;
        if(word.length()>10){
            cout<<word[0]<<word.length()-2<<word[word.length()-1]<<endl;
        }
        else{
            cout<<word<<endl;
        }
    }
}