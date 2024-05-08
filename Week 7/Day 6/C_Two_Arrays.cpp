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
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool ans = true;
        for (ll i = 0; i < n; i++) {
            ll d = b[i] - a[i];
            if (d == 1 || d == 0) {
                continue;
            } else {
                ans = false;
                break;
            }
        }
        cout << (ans ? "YES" : "NO") << '\n';
    }

    return 0;
}