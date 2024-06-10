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
        int a, b, k;
        cin >> a >> b >> k;

        int ans = 0;
        while(true){
            if (b / k >= a && b % k == 0){
                ans++;
                b /= k;
            }else if (b % k == 0){
                ans += (b - a);
                break;
            }else{
                ans += (b % k);
                b = b - b % k;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}