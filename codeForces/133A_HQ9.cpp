#include<bits/stdc++.h>
using namespace std;
int main(){
    string q;
    cin>>q;
    for(int i=0; i<q.length(); i++){
        if(q[i]=='H' || q[i]=='Q'||q[i]=='9'){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
