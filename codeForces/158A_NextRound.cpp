// #include<bits/stdtr1c++.h>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n>>k;
//     int arr[50];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int count=0;
//     if(arr[k-1]<0){
// cout<<0;
//     }else{ 
//     for(int i=0;i<n;i++){
//          if(arr[i]>=arr[k-1]){
//              count++;
//          }
//         //count++;

//     }
//     cout<<count;
// }}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]>=a[k-1]&& a[i]!=0){
            count+=1;
        }
    }
cout<<count;
return 0;
}