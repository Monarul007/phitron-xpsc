#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(0);

    const int B = 26;

    int t; 
    cin >> t;
    while(t--){
        int n, k; 
        cin >> n >> k;
        string s; 
        cin >> s;
        int v[B] = {0};
        for(int i = 0; i < s.size(); i++){
            v[s[i] - 'a']++;
        }
        int count = 0; 
        for(int i = 0; i < B; i++){
            count += v[i] % 2;
        }
        if(count <= k + 1){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }
    
    return 0;
}