#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;

    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<long long, long long> freq;
    long long left = 0, right = 0, count = 0, ans = 0;

    while(right < n){
        freq[arr[right]]++;
        if (freq[arr[right]] == 1){
            count++;
        }
        while(count > k){
            freq[arr[left]]--;
            if(freq[arr[left]] == 0){
                count--;
            }
            left++;
        }
        ans += right - left + 1;
        right++;
    }
    cout << ans << '\n';
    
    return 0;
}