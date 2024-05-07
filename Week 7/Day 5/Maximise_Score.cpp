#include <bits/stdc++.h>
using namespace std;
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

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int max1 = INT_MAX, ans = INT_MAX;
        for(int i = 1; i < n - 1; i++){
            max1 = max(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1]));
            if(ans > max1){
                ans = max1;
            }
        }
        ans = min({abs(arr[0] - arr[1]), ans, abs(arr[n - 1] - arr[n - 2]), ans});

        cout << ans << '\n';
    }

    return 0;
}