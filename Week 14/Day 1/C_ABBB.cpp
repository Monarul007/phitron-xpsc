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
        for(ll i = 0; i < s.length(); i++){
            if (s[i] == 'A' && s[i + 1] == 'B'){
                s.erase(s.begin() + i + 1);
                s.erase(s.begin() + i);
                i -= 2;
            }else if (s[i] == 'B' && s[i + 1] == 'B'){
                s.erase(s.begin() + i + 1);
                s.erase(s.begin() + i);
                i -= 2;
            }
        }
        cout << s.length() << '\n';
    }

    return 0;
}