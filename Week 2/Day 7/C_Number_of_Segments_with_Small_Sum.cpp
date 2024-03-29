#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long s;
    cin >> n >> s;

    vector<int> a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }

    long long left = 0, right = 0, ans = 0, sum = 0;
    while (right < n) {
        sum += a[right];
        if (sum <= s) {
            ans += (right - left + 1);
        }else {
            while (sum > s && left < right) {
                sum -= a[left];
                left++;
            }
            if (sum <= s) {
                ans += (right - left + 1);
            }
        }
        right++;
    }
    cout << ans << '\n';
    
    return 0;
}