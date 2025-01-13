#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, h;
    cin>>n>>h;
    int width = n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp>h){
            width++;
        }
    }
    cout<<width<<endl;
}
