#include <bits/stdc++.h>
using namespace std;

int LCSubStr(string str1, string str2){
    int ans = 0;

	for (int i = 0; i < str1.length(); i++){
        for (int j = 0; j < str2.length(); j++) {
            int k = 0;
            while ((i + k) < str1.length() && (j + k) < str2.length() && str1[i + k] == str2[j + k]) {
                k = k + 1;
            }
            ans = max(ans, k);
	    }
	}
    return ans;
}
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;

        int aN = a.length();
        int bN = b.length();
        int sL = LCSubStr(a, b);

        int c = (aN - sL) + (bN - sL);
        cout << c << "\n";
    }

    return 0;
}