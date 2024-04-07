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
    while(t--)
    {
        long long n,m,h;
        cin >> n >> m >> h;

        long long A[n], B[m];
        for(int i= 0; i < n; i++) cin>>A[i];
        for(int i= 0; i < m; i++) cin>>B[i];

        sort(A, A + n, greater<long long>());
        sort(B, B + m, greater<long long>());
        long long ans = 0;
        for(int i = 0; i < min(m,n); i++){
            ans += min(A[i], B[i] * h);
        }
        
        cout << ans << '\n';
    }

    return 0;
}