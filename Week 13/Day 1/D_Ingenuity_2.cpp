#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int n; 
        string s;
        cin >> n >> s;

        int x = 0, y = 0;
        for(auto i : s){
            if(i == 'N') y++;
            else if(i == 'S') y--;
            else if(i == 'W') x--;
            else x++;
        }
        if(abs(x) % 2 == 1 || abs(y) % 2 == 1){ 
            cout << "NO" << '\n';
        }else if(n == 2 && x == 0 && y == 0){
            cout << "NO" << '\n';
        }else{
            int n = 0, st = 0, w = 1, e = 1;
            char m[2] = {'R', 'H'};
            string ans = "";
            for(auto c : s){
                if(c == 'N'){
                    ans += m[n], n = 1 - n;
                }else if(c == 'S'){
                    ans += m[st], st = 1 - st;
                }
                else if(c == 'W'){
                    ans += m[w], w = 1 - w;
                }else{
                    ans += m[e], e = 1 - e;
                }
            }
            cout << ans << '\n';
        }
    }

    return 0;
}