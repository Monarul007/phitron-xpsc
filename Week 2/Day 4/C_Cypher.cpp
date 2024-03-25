#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<int> v(n); 
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        for(int i = 0; i < n; i++){
            int x; 
            cin >> x;
            string s; 
            cin >> s;
            
            int count = 0;
            for(int j = 0; j < s.size(); j++){
                if(s[j] == 'D'){
                    count++;
                }else if(s[j] == 'U'){
                    count--;
                }
            }

            v[i] = (v[i] + (count % 10) + 10) % 10;
        }

        for(int i = 0; i < n; i++){
            cout << v[i]  << " ";
        }
        cout << endl;
    }
    
    return 0;
}