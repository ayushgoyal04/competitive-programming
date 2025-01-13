#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size(), countSmall = 0, countBig = 0;
    for(int i = 0; i < n; i++)
    {
        if('a' <= s[i] && s[i] <= 'z')
        {
            countSmall++;
        }
        else
        {
            countBig++;
        }
    }
    if(countSmall >= countBig)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }
    return 0;
}
