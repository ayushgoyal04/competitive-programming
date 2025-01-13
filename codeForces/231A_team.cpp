#include<iostream>
using namespace std;
int main(){

    int c;
    cin>>c;
    int count=0;
    while(c--){
     //   count =0;
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            count++;
        }

    }
    cout << count << endl;



}