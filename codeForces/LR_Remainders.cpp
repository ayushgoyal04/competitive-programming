#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        deque<long long int> q;
        long int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            q.push_back(temp);

        }
        
        string s;
        cin>>s;
        int l = s.length();
        int i=0;
        
        long long int pro=1;
        for(int i=0;i<l;i++){
            pro = pro * q[i];

        }
        long long int rem= pro%m;
        cout<<rem<<" ";
        
        while(l>1){ 
            
        
        if(s[i]=='L'){
            long long data1 = q[0];
            pro = pro/data1;
            cout<<pro%m<<" "; 
            q.pop_front();
            l = q.size();
            i++;
           // l--;
        }
        else if(s[i]=='R'){
            long long data1 = q[l-1];
            pro = pro/data1;
            cout<<pro%m<<" ";
            q.pop_back();
            l = q.size();
            i++;
          //  l--;
        }
        
        }
    }

//cout<<endl;
return 0;
}