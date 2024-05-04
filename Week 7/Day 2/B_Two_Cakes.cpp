#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;

    int l = 1,r = min(a,b);
    int ans = 1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(a/mid + b/mid >= n){
            l = mid+1;
            ans = mid;
        }else{
            r= mid-1;
        }
    }
    cout << ans << '\n';

    return 0;
}