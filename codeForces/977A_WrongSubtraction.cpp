#include<bits/stdc++.h>
using namespace std;
int main(){
    int k, n;
    cin>>k>>n;
    while(n--){
        if(k%10==0){
            k=k/10;
        }
        else{
            k--;
        }
    }
    cout<<k<<endl;
    return 0;
}
