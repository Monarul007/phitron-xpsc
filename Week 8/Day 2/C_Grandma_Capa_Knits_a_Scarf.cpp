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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = INT_MAX;
        for(char i = 'a'; i <= 'z'; i++){
            int mod = 0;
            int l = 0, r = n - 1;
            while (l <= r){
                if (s[l] != s[r]) {
                    if (s[l] == i) {
                        l++;
                        mod++;
                    } else if (s[r] == i) {
                        r--;
                        mod++;
                    } else {
                        mod = INT_MAX;
                        break;
                    }
                }else{
                    l++;
                    r--;
                }
            }
            ans = min(ans, mod);
        }
        if (ans == INT_MAX){
            cout << -1 << "\n";
        }else{
            cout << ans << "\n";
        }
    }

    return 0;
}