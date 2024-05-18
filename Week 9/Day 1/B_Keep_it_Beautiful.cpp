#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        
        vector<int> v(n);
        string ans = "";
        vector<int> taken;
        bool flag = false;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(taken.empty()){
                ans.push_back('1');
                taken.push_back(v[i]);
            }else{
                if(flag){
                    if(v[i] < taken.back()){
                        ans.push_back('0');
                    }else{  
                        if(v[i] > taken[0]){
                            ans.push_back('0');
                        }else{
                            ans.push_back('1');
                            taken.push_back(v[i]);
                        }
                    }
                }else{
                    if(v[i] >= taken.back()){
                        ans.push_back('1');
                        taken.push_back(v[i]);
                    }else{
                        if(v[i] > taken[0]){
                            ans.push_back('0');
                        }else{
                            flag = true;
                            ans.push_back('1');
                            taken.push_back(v[i]);
                        }
                    }
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}