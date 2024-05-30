#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    multiset<ll> tprice;
    for (ll i = 0; i < n; i++){
        ll price;
        cin >> price;
        tprice.insert(price);
    }

    for (ll i = 0; i < m; i++){
        ll paid;
        cin >> paid;

        auto it = tprice.upper_bound(paid);
        if (it == tprice.begin()){
            cout << -1 << endl;
            continue;
        }else{
            cout << *(--it) << endl;
            tprice.erase(it);
        }
    }

    return 0;
}