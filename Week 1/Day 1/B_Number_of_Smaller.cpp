#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    int l = 0, r = 0, count = 0;
    vector<int> ans;
    while(r < m){
        while(a[l] < b[r] && l < n){
            l++;
            count++;
        }
        ans.push_back(count);
        r++;
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}