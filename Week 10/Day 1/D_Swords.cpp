#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll x, ll y){
    return (x == 0) ? y : gcd(y % x, x);
}
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mx(0);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        mx = (mx > a[i]) ? mx : a[i];
    }
    
    ll z(0);
    for(ll p = 0; p < n; p++){
        z = gcd(z, mx - a[p]);
    }

    ll y(0);
    for(ll p = 0; p < n; p++){
        y += (mx - a[p]) / z;
    }
    cout << y << " " << z << '\n';

    return 0;
}