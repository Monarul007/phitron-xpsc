#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--){
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        int k = -1, ans = INT_MIN;
        s = s + s;
        for (int i = s.length(); i >= 0; i--){
            if (s[i] == 'g'){
                k = i;
            }
            if (s[i] == c){
                ans = max(ans, k - i);
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}