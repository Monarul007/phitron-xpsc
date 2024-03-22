#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(0);

    string S, T;
    cin >> S >> T;

    int count = 0;
    for(int i = 0; i < S.size(); i++){
        if(S[i] != T[i]){
            S[i] = T[i];
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}