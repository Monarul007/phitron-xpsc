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
        
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        ll ans = v[0];
        for(int i = 1; i < n; i++){
            ans = ans & v[i];
        }
        cout << ans << "\n";
    }

    return 0;
}