#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<string> programs(N);
    map<string, bool> mp;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        programs[i] = s;
        mp[programs[i]] = true;
    }

    for(int i = N - 1; i >= 0; i--){
        if(mp[programs[i]]){
            string p = programs[i];
            cout << p[p.size() - 2] << p[p.size() - 1];
            mp[programs[i]] = false;
        }
        // cout << programs[i] << " => " << mp[programs[i]] << "\n";
    }

    return 0;
}