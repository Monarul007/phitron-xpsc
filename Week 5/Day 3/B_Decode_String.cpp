#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        string t;
        cin >> t;

        string res = "";
        for (int i = 0; i < n; i++){
            if (i + 2 < n and t[i + 2] == '0' and (i + 3 >= n or t[i + 3] != '0')){
                int twoORone = ((t[i] - '0') * 10) + (t[i + 1] - '0');
                res.push_back((char)(96 + twoORone));
                i += 2;
            }else{
                int twoORone = ((t[i] - '0'));
                res.push_back((char)(96 + twoORone));
            }
        }

        cout << res << '\n';
    }

    return 0;
}