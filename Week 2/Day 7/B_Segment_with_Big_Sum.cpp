#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    long long n, s;
    cin >> n >> s;

    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long minLength = n + 1;
    long long left = 0, right = 0, sum = 0;
    while (right < n) {
        sum += arr[right];
        while (sum >= s && left <= right) {
            minLength = min(minLength, right - left + 1);
            sum -= arr[left];
            left++;
        }
        right++;
    }

    if (minLength == n + 1) {
        cout << -1;
    } else {
        cout << minLength;
    }
    
    return 0;
}