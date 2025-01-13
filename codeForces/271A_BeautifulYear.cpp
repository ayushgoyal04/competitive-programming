// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n+1;i<=9000;i++){
//         int temp = i;
//         int u = temp % 10;
//         temp = temp/10;
//         int t = temp % 10;
//         temp = temp / 10;
//         int h = temp % 10;
//         temp = temp/ 10;
//         int th = temp % 10;
//         if(u!=t && u!=h && u!=th && t!=h && t!=th && h!=th){
//             cout<<i<<endl;
//             break;
//         }
        
//     }
// }
//4022146   Jul 4, 2013 8:34:23 PM	fuwutu	 271A - Beautiful Year	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int y;
    cin >> y;
    while (true)
    {
        y += 1;
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << y << endl;
    return 0;
}