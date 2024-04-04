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
        
        if(s1 == s2){
            cout << "=" << '\n';
        }else{
            char s1last = s1.back();
            char s2last = s2.back();
            if(s1last == 'L' && s2last == 'L'){
                int countXS1 = 0;
                for(int i = 0; i < s1.size(); i++){
                    if(s1[i] == 'X'){
                        countXS1++;
                    }
                }
                int countXS2 = 0;
                for(int i = 0; i < s2.size(); i++){
                    if(s2[i] == 'X'){
                        countXS2++;
                    }
                }
                if(countXS1 > countXS2){
                    cout << ">" << '\n';
                }else{
                    cout << "<" << '\n';
                }
            }else if(s1last == 'S' && s2last == 'S'){
                int countXS1 = 0;
                for(int i = 0; i < s1.size(); i++){
                    if(s1[i] == 'X'){
                        countXS1++;
                    }
                }
                int countXS2 = 0;
                for(int i = 0; i < s2.size(); i++){
                    if(s2[i] == 'X'){
                        countXS2++;
                    }
                }
                if(countXS1 > countXS2){
                    cout << "<" << '\n';
                }else{
                    cout << ">" << '\n';
                }
            }else if(s1last == 'S' && s2last == 'M'){
                cout << "<" << '\n';
            }else if(s1last == 'M' && s2last == 'S'){
                cout << ">" << '\n';
            }else if(s1last == 'M' && s2last == 'L'){
                cout << "<" << '\n';
            }else if(s1last == 'L' && s2last == 'S'){
                cout << ">" << '\n';
            }else if(s1last == 'L' && s2last == 'M'){
                cout << ">" << '\n';
            }
        }
    }

    return 0;
}