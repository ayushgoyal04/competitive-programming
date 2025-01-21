#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int arr[n];
    long long int sum=0;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    int count =0;
    int halfsum;
    if(sum%2==0)
    {halfsum = sum /2;}
    else
    {halfsum = (sum+1) /2;}
    int j = n-1;
    while(sum>=halfsum){
        sum = sum - v[j];
        count++;
        j--;
    }
    cout<<count<<endl;
}
