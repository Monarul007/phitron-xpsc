#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll calc(vector<int> a,int n){
    ll res = 0, one = 0;
    for(int i = 0; i < n; i++){
        if(a[i]==1){
            one++;
        }else{
            res += one;
        }
    }
    return res;
}

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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long ans = calc(a, n);
        int id = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                a[i] = 1;
                id = i;
                break;
            }
        }
        ans = max(ans, calc(a, n));
        if (id != -1) {
            a[id] = 0;
        }
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] == 1) {
                a[i] = 0;
                break;
            }
        }
        ans = max(ans, calc(a, n));
        cout << ans << '\n';
    }

    return 0;
}