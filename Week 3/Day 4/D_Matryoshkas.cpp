#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
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

        // for(auto i: mp){
        //     cout << i.first << " : " << i.second << ",";
        // }
        // cout << '\n';

        int cnt = 0;
        for(int i = 0; i < n; i++){
            int val = arr[i];
            if(mp[arr[i]] != 0){
                cnt++;
                while(mp[val] > 0){
                    mp[val]--;
                    val++;
                }
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}