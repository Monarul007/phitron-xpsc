#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        
        long long mat[n+5][n];
        for(long long i = 1; i <= n; i++) {
            for(long long j = 1; j < n; j++) {
                cin >> mat[i][j];
            }
        }
        
        map<long long, long long> mp;
        map<long long, long long> track;
        for(long long i = 1; i <= n; i++) {
            mp[mat[i][n - 1]]++;
            track[mat[i][n - 1]] = i;
        }
        
        long long pos, val;
        for(auto it: mp) {
            if(it.second == 1) {
                pos = it.first;
            }else{
                val = it.first;
            }
        }
        
        for(long long i = 1; i < n; i++) { 
            cout << mat[track[pos]][i] << " ";
        }
        cout << val << '\n';
    }

    return 0;
}