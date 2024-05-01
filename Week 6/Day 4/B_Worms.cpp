#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int idx = 1;
    int w;

    vector<int> v(1000006);
    for(int i = 1; i <= n;i++){
        cin >> w;
        while(w--){
            v[idx] = i;
            idx++;
        }
    }
    
    int q;
    cin >> q;
    while(q--){
        cin >> w;
        cout << v[w] << '\n';
    }

    return 0;
}