#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++){
        cin >> v[i];
    }

    ll sum = 0, count = 0;
    map<ll, ll> vis;
    vis[0]++;
    for (ll i = 0; i < n; i++){
        sum += v[i];
        count += vis[sum - x];
        vis[sum]++;
    }
    cout << count;

    return 0;
}