#include<bits/stdc++.h>
using namespace std;
int main(){

     int k, n, w;
     cin>>k>>n>>w;
    long long int cost=0;
    cost = k * w*(w+1)/2;
    if(cost>n){cout<<cost-n<<endl;}
    else {cout<<0<<endl;}
}
