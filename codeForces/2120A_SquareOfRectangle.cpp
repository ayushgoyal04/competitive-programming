#include <bits/stdc++.h>
using namespace std;

bool checkSquare(int l1, int b1, int l2, int b2, int l3, int b3, int side) {
    // Config 1: vertical stacking
    if (b1 == side && b2 == side && b3 == side && (l1 + l2 + l3 == side)) return true;

    // Config 2: horizontal stacking
    if (l1 == side && l2 == side && l3 == side && (b1 + b2 + b3 == side)) return true;

    // Try placing two rectangles side-by-side, third one on top
    // We try all 3 combinations of which one is placed on top

    // r1 and r2 on bottom, r3 on top
    if ((b1 + b2 == side) && (l1 == l2) && (b3 == side) && (l3 + l1 == side)) return true;
    if ((b1 + b2 == side) && (l1 == l2) && (b3 == side) && (l3 == side - l1)) return true;

    // general: r1 and r2 side-by-side on bottom, same height
    if ((l1 == l2) && (b1 + b2 == side) && (b3 == side) && (l3 + l1 == side)) return true;

    // r1 and r3 on bottom, r2 on top
    if ((l1 == l3) && (b1 + b3 == side) && (b2 == side) && (l2 + l1 == side)) return true;

    // r2 and r3 on bottom, r1 on top
    if ((l2 == l3) && (b2 + b3 == side) && (b1 == side) && (l1 + l2 == side)) return true;

    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

        int area = l1*b1 + l2*b2 + l3*b3;
        int side = sqrt(area);

        if (side * side != area) {
            cout << "NO" << endl;
            continue;
        }

        if (checkSquare(l1, b1, l2, b2, l3, b3, side)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
