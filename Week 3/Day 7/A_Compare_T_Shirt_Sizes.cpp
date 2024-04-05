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
        string s1, s2;         
        cin >> s1 >> s2;
        int n = s1.size();
        int m = s2.size();
 
        char s1last, s2last;
        int xCount1 = 0, xCount2 = 0;
        for(int i=0;i<n;i++){
            if(s1[i] != 'X'){
                s1last = s1[i];
            }else{
                xCount1++;
            }
        } 
        for(int i = 0; i < m; i++){
            if(s2[i] != 'X'){
                s2last = s2[i];
            }else{
                xCount2++;
            }
        }
 
        if(s1last == s2last ){
            if(xCount1 == xCount2 || s1last == 'M'){
                cout << "=" << '\n';
                continue;
            }
            if(s1last == 'S'){
                if(xCount1 > xCount2){
                    cout << "<" << '\n';
                }else{
                    cout << ">" << '\n';
                }
            }else if(s1last == 'L'){
                if(xCount1 > xCount2){
                    cout << ">" << '\n';
                }else{
                    cout << "<" << '\n';
                }
            }
            continue;
        }
        if(s1last == 'S'){
            cout << "<" << '\n';
        }else if(s1last == 'M' and s2last =='S'){
            cout << ">" << '\n';
        }else if(s1last == 'M' and s2last =='L'){
            cout << "<"<< '\n';
        }else if(s1last == 'L'){
            cout << ">" << '\n';
        }
    }

    return 0;
}