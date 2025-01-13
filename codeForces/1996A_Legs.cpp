#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int temp = n;
        int cows = n/4;
        int rem = n%4;
        int chickens = rem/2;
        cout<<cows+chickens<<endl;
    }
}