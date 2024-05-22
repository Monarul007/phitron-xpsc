#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) { 
    return !a ? b : gcd(b % a, a); 
}
ll lcm(ll a, ll b) { 
    return a / gcd(a, b) * b; 
}
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll ans = 0;
    ans += (n / a) * p;
	ans += (n / b) * q;
	ans -= (n / lcm(a, b)) * min(p, q);
	cout << ans << '\n';

    return 0;
}