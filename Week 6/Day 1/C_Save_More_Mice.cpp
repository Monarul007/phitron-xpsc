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
        ll n, x;
        cin >> n >> x;

        vector<ll> v(x);
        for(int i = 0; i < x; i++){
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());
        ll catPos = 0, totalSaved = 0;
        for(int i = 0; i < x; i++){
            if(catPos < v[i]){
                catPos += (n - v[i]);
                totalSaved++;
            }else{
                break;
            }
        }

        cout << totalSaved << '\n';
    }

    return 0;
}