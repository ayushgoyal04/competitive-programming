#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int maxIndex=0;
    int minIndex=0;
    for(int i=1;i<n;i++){
        if(v[i]>v[maxIndex])
            maxIndex=i;
        if(v[i]<=v[minIndex])
            minIndex=i;
    }
    int ans=maxIndex+(n-1-minIndex);
    if(maxIndex>minIndex)
        ans--;
    cout<<ans<<endl;
    return 0;
}
