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
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        sort(arr.begin(), arr.end());

        int ans;
        vector<int> v;
        for(int i = 0; i < n + 2; i++){
            if(mp[i] == 0){
                ans = i;
                break;
            }else if(mp[i] == 1){
                v.push_back(i);
            }else if(mp[i] > 1){
                continue;
            }
        }
        if(v.empty()){
            cout << ans << '\n';
        }else if(v.size() == 1){
            cout << ans << '\n';
        }else if(v.size() > 1){
            cout << v[1] << '\n';
        }
    }

    return 0;
}