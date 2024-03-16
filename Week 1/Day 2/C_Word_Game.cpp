#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < n; j++){
                string s;
                cin >> s;
                
                cout << s << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}