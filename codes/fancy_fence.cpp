#include <bits/stdc++.h>
using namespace std;

#define enl "\n"
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t;
    cin >> t;

    while (t--) {
        int a;
        cin >> a;

        int num_sides = 360 / (180 - a);

        if (360 % (180 - a) == 0 && num_sides >= 3) {
            cout << "YES" << enl;
        } else {
            cout << "NO" << enl;
        }
    }

    return 0;
}
