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
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        
        vector<ll> arrA(k+1), arrB(k+1);
        for (ll i = 1; i <= k; i++){
            cin >> arrA[i];
        }
        for (ll i = 1; i <= k; i++){
            cin >> arrB[i];
        }

        while(q--){
            ll d;
            cin >> d;

            ll index = lower_bound(arrA.begin(), arrA.end(), d) - arrA.begin();
            if(arrA[index] == d){
                cout << arrB[index] << ' ';
            }else{
                ll up = arrA[index] - arrA[index - 1];
                ll down = arrB[index] - arrB[index - 1];

                cout << arrB[index - 1] + (d - arrA[index - 1]) * down / up << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}