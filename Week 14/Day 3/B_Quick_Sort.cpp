#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        
        int tt = 1;
        for (int i = 0; i < n; i++) {
            if (v[i] == tt) tt++;
        }
        cout << (n  - tt + k) / k  << "\n";
    }

    return 0;
}