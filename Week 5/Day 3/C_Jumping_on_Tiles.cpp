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

        int n = s.size();
        map<char, vector<int>> order;
        for(int i = 0; i < n; ++i) {
            order[s[i]].push_back(i);
        }

        int direction = (s[0] < s[n - 1]) ? 1 : -1;
        vector<int> ans;
        for (char c = s[0]; c != s[n - 1] + direction; c += direction) {
            for(auto it : order[c]){
                ans.push_back(it);
            }
        }

        int cost = 0;
        for (int i = 1; i < ans.size(); i++){
            cost += abs(s[ans[i]] - s[ans[i - 1]]);
        }

        cout << cost << " " << ans.size() << '\n';
        for (auto it : ans) {
            cout << it + 1 << " ";
        }
        cout << '\n';
    }

    return 0;
}