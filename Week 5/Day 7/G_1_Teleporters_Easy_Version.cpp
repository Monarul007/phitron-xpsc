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
        ll n, c;
        cin >> n >> c;

        vector<ll> v(n);
        for(ll i = 0; i < n; i++){
            cin >> v[i];
            v[i] = v[i] + i + 1;
        }

        sort(v.begin(), v.end());
        ll sum = 0;
        for(ll i = 0; i < n; i++){
            sum += v[i];
            if(sum > c){
                cout << i << '\n';
                break;
            }
        }

        if(sum <= c) cout << n << '\n';
    }

    return 0;
}