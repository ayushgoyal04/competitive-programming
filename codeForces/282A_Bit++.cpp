#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int ans=0;
    cin>>n;
    while(n--){
        string a;
        cin>>a;
        
        if(a=="X++"||a=="++X"){
            ans += 1;
        }
        else if(a=="--X"||a=="X--"){
            ans -= 1;
        }

    }

cout<<ans;
}