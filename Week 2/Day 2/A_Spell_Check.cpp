#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(0);

    string txt = "Timur";
    sort(txt.begin(), txt.end());

    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string pat;
        cin >> pat;

        sort(pat.begin(), pat.end());

        if(txt == pat){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }
    
    return 0;
}