#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int oddCount = 0;
        for (int i = 0; i < k; i++) {
            if (arr[i] & 1){
                oddCount++;
            }
        }

        int ans = 0;
        if (oddCount > 0){
            ans++;
        }

        for (int i = k; i < n; i++) {
            if (arr[i - k] & 1){
                oddCount--;
            }
            if (arr[i] & 1){
                oddCount++;
            }
            if (oddCount > 0){
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}