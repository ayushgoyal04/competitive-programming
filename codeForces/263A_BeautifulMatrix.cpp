#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5]={0};
    int row, col;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){

              cin>>arr[i][j];
              if(arr[i][j]==1){
                row = i;
                col = j;
              //  cout<<row<<" "<<col;
                break;
              }  
        }

    }
    
    int ans1;
    if(row>2){
        ans1 = row-2;
    }
    else if(row<2){
        ans1 = 2-row;
    }
    else{
        ans1 = 0;
    }

    int ans2;
    if(col>2){
        ans2 = col-2;
    }
    else if(col<2){
        ans2 = 2-col;
    }
    else{
        ans2 = 0;
    }
cout<<(ans1+ans2);
}