#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        vector<int> capital, small;
        vector<bool> okay(n + 2, true);
        for(int i = 0; i < n; i++){
            if (s[i] == 'b') {
                if(!small.empty()){
                    okay[small.back()] = false;
                    small.pop_back();
                }
                okay[i] = false;
            }else if(s[i] == 'B'){
                if (!capital.empty()) {
                    okay[capital.back()] = false;
                    capital.pop_back();
                }
                okay[i] = false;
            }else if (s[i] >= 'A' && s[i] <= 'Z') {
                capital.push_back(i);
            }else {
                small.push_back(i);
            }
        }

        for(int i = 0; i < n; i++){
            if(okay[i]){
                cout << s[i];
            }
        }
        cout << '\n';
    }

    return 0;
}