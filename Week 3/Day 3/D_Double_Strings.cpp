#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string words[n];
        map<string, bool> m;
        for(int i = 0; i < n; i++){
            cin >> words[i];
            m[words[i]] = true;
        }

        for(int i = 0; i < n; i++){
            string s = words[i];

            bool flag = false;
            for(int j = 1; j < s.length(); j++){
                string firstpart = s.substr(0, j);
                string secondpart = s.substr(j, s.length() - j);
                if(m[firstpart] && m[secondpart]){
                    flag = true;
                    break;
                }
            }
            cout << flag;
        }
        cout << '\n';
    }

    return 0;
}