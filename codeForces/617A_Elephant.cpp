#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int steps = n/5;
    int rem = n - steps*5;
    if(rem == 0){
        cout<<steps;
    }else 
    cout<<steps+1<<endl;
}