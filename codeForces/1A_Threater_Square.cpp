#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a, b, c;
    cin>>a>>b>>c;
    long long int count1 = 0, count2=0;

    count1 = a/c;
    count2 = b/c;
    if(a%c!=0){
        count1++;
    }
    if(b%c!=0){
        count2++;
    }

    cout<<count1*count2<<endl;

    // if(c == 1){
    //     cout<<a*b<<endl;
    //     return 0;
    // }
    // if(c==0){

    //     return 0;
    // }

    // if(a!=b){
    // for(int i=0;i<a;i=i+c){
    //     count1++;
    // }
    // for(int i=0;i<b;i=i+c){
    //     count2++;
    // }
    // cout<<count1*count1<<endl;
    // return 0;
    // }
    // else{
    //     for(int i=0;i<a;i=i+c){
    //     count1++;
    // }
    //     cout<<count1*count1<<endl;
    //     return 0;
    // }
}
