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
        int m = (n * n - n) / 2;
        vector<ll> b(m);
        vector<ll> a(n);
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        int x = 1;
        int ind = 0;
        int bToA = n - x;
        while(n-x > 0){
            a[ind++] = b[bToA - 1];
            x++;
            bToA += n - x;
        }
        a[n-1] = 1000000000;
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}