#include <bits/stdc++.h>
using namespace std; 

#define ss second
#define ff first
#define pb push_back
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define enl "\n"
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(s) int(s.size())
#define fore(i, n) for (int i = 0; i < n; ++i)
#define forn(i, a, b) for (int i = a; i < b; ++i)
#define ford(i, a, b) for (int i = a; i >= b; --i)
#define arre cout << "YES" << enl;
#define nel cout << "NO" << enl;
#define neg cout << -1 << enl;
#define srt(s) sort(all(s));
#define rsrt(s) sort(rall(s));
#define lower(vec, s) lower_bound(all(vec), s)
#define upper(vec, s) upper_bound(all(vec), s)

typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<char> vchar;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vi> vvi;

const int MOD = 1000000007;
const double PI = acos(-1.0);

int main() {
    fastio;

    int n;
    cin >> n;

    if (n % 2 == 1) {
        cout << -1 << enl;
        return 0;
    }

    vi permutation(n);
    fore(i, n) {
        if (i % 2 == 0) {
            permutation[i] = i + 2;
        } else {
            permutation[i] = i;
        }
    }

    for (int i : permutation) {
        cout << i << " ";
    }
    cout << enl;

    return 0;
}
