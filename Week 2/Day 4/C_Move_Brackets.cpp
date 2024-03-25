#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int a = 0;
        for (int i = 0; i < n; i++){
            if(s[i] == '('){
                a++;
            }else{
                if(a > 0 && s[i] == ')'){
                    a--;
                }
            }
        }
        cout << a << endl;
    }

    return 0;
}
