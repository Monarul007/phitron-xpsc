#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll LCM(ll a, ll b){
    return a / __gcd(a, b) * b;
}

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll X;

    cin >> X;
    ll ans;
    for(ll i = 1 ; i * i <= X ; i++){
        if(X % i == 0 && LCM(i, X / i) == X){
            ans = i;
        }
    }
    cout << ans << " " << X / ans << endl;

    return 0;
}