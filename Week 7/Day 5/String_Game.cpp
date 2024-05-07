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

        string s;
        cin >> s;

        int zero = 0, one = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                one++;
            }else{
                zero++;
            }
        }

        int minpair = min(zero, one);
        if(minpair % 2 == 0){
            cout << "Ramos" << '\n';
        }else{
            cout << "Zlatan" << '\n';
        }
    }

    return 0;
}