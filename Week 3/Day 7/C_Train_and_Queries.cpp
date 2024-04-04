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
        ll n, m;
        cin >> n >> m;
        map<ll, pair<ll, ll>> mp;
        for(ll i = 0; i < n; ++i){
            ll x;
            cin >> x;
            if(!mp.count(x)){
                mp[x].first = i;
                mp[x].second = i;
            }else{
                mp[x].second = i;
            }
        }

        for(ll i = 0; i < m; ++i){
            ll x, y;
            cin >> x >> y;
            if(!mp.count(x) || !mp.count(y) || mp[x].first > mp[y].second) {
                cout << "NO" << '\n';
            }else{
                cout << "YES" << '\n';
            }
        }
    }

    return 0;
}