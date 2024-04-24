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
        ll n;
        cin >> n;
        ll total(0); 
        ll minimumV = INT_MAX, negativeCount = 0;
        for(ll i = 0; i < n; i++){
            ll x; 
            cin >> x;
            if(x < 0){
                negativeCount = 1 - negativeCount; x = -x;
            }
            total += x;
            minimumV = min(minimumV, x);
        }

        if(negativeCount){
            total -= 2 * minimumV;
        }
        cout << total << '\n';
    }

    return 0;
}