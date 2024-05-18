#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> divisor;
    for (ll i = 1; i * i <= n; i++){
        if (n % i == 0){
            divisor.push_back(i);
            if ((n / i) != i){
                divisor.push_back(n / i);
            }
        }
    }

    sort(divisor.begin(), divisor.end());
    if (divisor.size() < k){
        cout << -1 << '\n';
        return 0;
    }
    cout << divisor[k - 1] << '\n';

    return 0;
}