#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    string txt, pat;
    cin >> txt >> pat;

    vector<int> freq(256, 0);
    vector<int> freq2(256, 0);
    for (int i = 0; i < pat.size(); i++){
        freq[pat[i]]++;
        freq2[txt[i]]++;
    }

    int ans = 0;
    if(freq == freq2) ans++;
    
    int i = 0, j = pat.size();
    while(j < txt.size()){
        freq2[txt[i]]--;
        freq2[txt[j]]++;
        if(freq == freq2) ans++;
        i++;
        j++;
    }
        
    cout << ans << endl;

    return 0;
}