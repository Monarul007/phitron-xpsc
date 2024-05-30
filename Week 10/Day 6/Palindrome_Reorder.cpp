#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    map<char, int> mp;
    for(char c : s){
        mp[c]++;
    }

    int count = 0;
    char AZ;
    for(auto x : mp){
        if(x.second % 2){
            AZ = x.first;
            count++;
        }
    }
    if ((s.size() % 2 == 0 && count > 0) || count > 1)
        cout << "NO SOLUTION";
    else{
        string ans = "";
        for (auto x : mp) {
            for (int i = 1; i <= x.second / 2; i++) ans += x.first;
        }
        cout << ans;
        if (s.size() % 2) cout << AZ;
        reverse(ans.begin(), ans.end());
        cout << ans;
    }

    return 0;
}