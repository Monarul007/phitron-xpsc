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

    ll sum = 0, l = 0, r = 0, count = 0;
    while (r < n){
        sum += v[r];
        while (sum >= x){
            if(sum == x){
                count++;
            }
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << count;

    return 0;
}