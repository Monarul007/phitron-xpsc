#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--){
        ll n;
        cin >> n;
        ll a[n];

        for (int i = 0; i < n; i++)  cin >> a[i];

        ll mn = a[n - 1], ind = n - 1;
        vector<pair<ll, ll>> v(n);
        for(int i = n - 1; i >= 0; i--){
            if (a[i] <= mn){
                mn = a[i];
                ind = i;
            }
            v[i] = {mn, ind};
        }

        if (n == 1){
            cout << 0 << '\n';
            continue;
        }

        ll cost = 0;
        mn = a[0];
        ind = 0;
        ll sum = 0;
        for(ll i = 1; i < n; i++){
            sum += max(a[i], a[i - 1]);
            if(a[i] < mn || a[i] == v[i].first){
                cost += min(sum, (i - ind) * max(mn, a[i]));
                mn = a[i];
                ind = i;
                sum = 0;
            }
        }

        cout << min(cost, max(a[0], a[n - 1]) * (n - 1)) << '\n';
    }

    return 0;
}