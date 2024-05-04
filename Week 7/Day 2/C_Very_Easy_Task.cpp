#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool is_possible(ll t, ll n, ll x, ll y){
    if (t < min(x, y)) return false;

    ll count = 1;
    t -= min(x, y);
    count += t / x + t / y;

    return count >= n;
}


int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x, y;
    cin >> n >> x >> y;

    ll l = 0, r = max(x, y) * n, mid;
    while (l + 1 < r){
        mid = l + (r - l) / 2;
        if (is_possible(mid, n, x, y)){
            r = mid;
        }else{
            l = mid;
        }
    }
    cout << r << '\n';

    return 0;
}