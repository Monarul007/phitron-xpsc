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
        int n;
        cin >> n;
        
        vector<ll> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        
        sort(v.begin(), v.end());
        
        priority_queue<ll> pq;
        pq.push(v[n-1]);
        for(int i = n-2; i >= 0; i--){
            if(pq.top() >= v[i]){
                ll x = pq.top() ^ v[i];
                pq.pop();
                pq.push(x);
            }else{
                pq.push(v[i]);
            }
        }
        
        cout << pq.size() << '\n';
    }

    return 0;
}