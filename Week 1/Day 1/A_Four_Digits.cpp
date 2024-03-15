#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    string S;
    cin >> S;
    if(S.size() < 4){
        for(int i = 0; i < 4 - S.size(); i++){
            cout << "0";
        }
    }
    cout << S << endl;

    return 0;
}