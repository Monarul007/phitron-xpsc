#include <bits/stdc++.h>
using namespace std;

int countOnes(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(m+1);
    for(int i = 0; i <= m; i++){
        cin >> v[i];
    }

    int count = 0;
    int ans = 0;
    for(int i = 0; i < m; i++){
        ans = v[i] ^ v[m];
        if(countOnes(ans) <= k){
            count++;
        }
    }
    cout << count << '\n';

    return 0;
}