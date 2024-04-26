#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector <int> palindromes;

void generatePalindromes(){
    int mx = 1 << 15;
    for(int i = 0; i < mx; i++){
        string s = to_string(i);
        string revStr = s;
        reverse(revStr.begin(), revStr.end());
        if(s == revStr) palindromes.push_back(i);
    }
}

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    generatePalindromes();

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        unordered_map<int, int> mp;

        ll ans = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < palindromes.size(); j++){
                if((v[i] ^ palindromes[j]) <= v[i]) continue;
                if(mp.find(v[i] ^ palindromes[j]) != mp.end()){
                    ans += mp[v[i] ^ palindromes[j]];
                }
            }
        }

        for(auto it : mp){
            ans += (it.second * (it.second + 1)) / 2;
        }

        cout << ans << "\n";
    }

    return 0;
}