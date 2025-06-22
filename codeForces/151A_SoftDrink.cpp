#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drink = k * l;
    int total_toasts = total_drink / nl;
    int total_limes = c * d;
    int total_salt = p / np;
    int min_toasts = min(total_toasts, min(total_limes, total_salt
    ));
    cout << min_toasts / n << endl;
    return 0;
}
