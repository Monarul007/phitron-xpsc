#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ans = 0;
        while(n--){
            int x;
            cin >> x;
            ans |= x;
        }
        cout << ans << "\n";
    }

    return 0;
}