#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>n>>k;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                }
            }
            
        
        for(int i=0;i<n;i+=k){  

            for(int j=0;j<n;j+=k){

                cout<<arr[i][j];
            }
            cout<<endl;
        } 
    
    }
    return 0;

}

