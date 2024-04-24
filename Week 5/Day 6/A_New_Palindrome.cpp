#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        bool ans = false;
        for(long i = 1; i < s.size() / 2; i++){
            if(s[i] != s[0]){
                ans = true;
                break;
            }
        }
        cout << (ans ? "YES" : "NO") << '\n';
    }

    return 0;
}