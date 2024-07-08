#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, k, d;
        cin >> n >> k >> d;
        
        vector<ll> a(n);
        for (ll p = 0; p < n; p++) {
            cin >> a[p];
        }

        map<ll, ll> s;
        for (ll p = 0; p < d; p++) {
            s[a[p]] = p;
        }

        ll mn = s.size();
        for (ll p = d; p < n; p++) {
            ll rem = a[p - d];
            ll nxt = a[p];
            if (s[rem] == p - d) {
                s.erase(rem);
            }
            s[nxt] = p;
            mn = (mn < s.size()) ? mn : s.size();
        }

        cout << mn << endl;
    }

    return 0;
}