#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        ll ans = 0;
        priority_queue<ll> pq;
        for(int i=0; i<n; i++){
            if(v[i] == 0){
                if(!pq.empty()){
                    ans += pq.top();
                    pq.pop();
                }
            }else{
                pq.push(v[i]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}