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

        ll ans = 0;
        while(n){
            ans += n; 
            n /= 2;
        }

        cout << ans << '\n';
    }

    return 0;
}