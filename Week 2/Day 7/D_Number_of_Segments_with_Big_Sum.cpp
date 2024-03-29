#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    long long s;
    cin >> n >> s;

    vector<long long> a(n);
    for (long long i = 0;i < n;i++) {
        cin >> a[i];
    }

    long long left = 0, right = 0, ans = 0, sum = a[0];
    while (right < n) {
        if (sum >= s) {
            ans += n - right;
            sum -= a[left];
            left++;
        }else {
            right++;
            sum += a[right];
        }
    }
    cout << ans << '\n';
    
    return 0;
}