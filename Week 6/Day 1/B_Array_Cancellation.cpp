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
    while (t--){
        int n;
        cin >> n;
        
        vector<ll> v(n);

        ll pos = 0, neg = 0;
        for(int i = 0; i < n; i++){
            ll x;
            cin >> x;

            if(x >= 0){
                pos += x;
            }else if(x < 0){
                if(pos + x >= 0){
                    pos += x;
                }else{
                    x += pos;
                    pos = 0;
                    neg += x;
                }
            }
        }
        cout << pos << '\n';
    }

    return 0;
}