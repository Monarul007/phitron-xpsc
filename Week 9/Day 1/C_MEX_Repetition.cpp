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
        ll n, k, b, missingV, last;
        cin >> n >> k;
        vector<ll> v, t;
        for (ll i = 0; i < n; i++) {
            cin >> b;
            v.push_back(b);
        }
        t = v;
        sort(t.begin(), t.end());
        missingV = n;
        for (ll i = 0; i < n; i++) {
            if (t[i] != i) {
                missingV = i;
                break;
            }
        }
        ll backUp;
        for (ll i = 0; i < n; i++) {
            backUp = v[i];
            v[i] = missingV;
            missingV = backUp;
        }
        v.push_back(missingV);

        last = (k - 1) % (n + 1);
        for (ll i = (n + 1 - last); i < (n + 1); i++) {
            cout << v[i] << " ";
        }
        for (ll i = 0; i < (n - last); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}