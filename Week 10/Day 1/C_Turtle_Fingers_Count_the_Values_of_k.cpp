#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll a, b, l;
        cin >> a >> b >> l;
        
        set<ll> s;
        ll divisors = 1;
        while (l % divisors == 0) {
            ll current = l / divisors;
            s.insert(current);
            while (current % a == 0) {
                s.insert(current / a);
                current /= a;
            }
            divisors *= b;
        }
        cout << s.size() << '\n';
    }

    return 0;
}