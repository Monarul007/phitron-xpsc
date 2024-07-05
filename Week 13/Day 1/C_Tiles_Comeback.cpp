#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<int> v(n, 0);
        v[n - 1] = 1;
        for(int i = n - 2; i >= 0; i--){
            v[i] = v[i + 1] + (a[i] == a[n - 1]);
        }

        if (a[0] == a[n - 1]){
            if(v[0] % k == 0 || v[0] >= k){
                cout << "YES" << '\n';
                continue;
            }
        }

        bool ans = false;
        int count = 0;
        for(int i = 0; i <= n - 2; i++){
            count += (a[i] == a[0]);
            if(count % k == 0 && v[i + 1] >= k){
                ans = true;
                break;
            }
        }

        if(ans) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}