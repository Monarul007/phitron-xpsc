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
        int n;
        cin >> n;
        
        ll total = 0; int count = 0; bool positive = true;
        for(int i = 0; i < n; i++){
            ll x;
            cin >> x;
            if(x > 0){
                positive = true; 
                total += x;
            }else if(x < 0){
                if(positive){
                    count++; 
                    positive = false;
                }
                total -= x;
            }
        }
        cout << total << ' ' << count << '\n';
    }

    return 0;
}