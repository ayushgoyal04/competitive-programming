#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // vector<int>v;
    long long int solx=0, soly=0, solz=0;
    for(int i=0;i<n;i++){
        int a, b, c;
        cin>>a>>b>>c;
        solx+=a;
        soly+=b;
        solz+=c;
    }
    if(soly == 0&&solx == 0&&solz == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
