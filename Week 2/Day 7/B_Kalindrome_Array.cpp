#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(vector<long long> a, long long x) {
    long long n = a.size(), i = 0, j = n - 1;
	while (i < j){
		if (a[i] == x){
            i++;
        }else if(a[j] == x){
			j--;
        }else if(a[i] != a[j]){
			return false;
        }else{
			i++;
            j--;
        }
	}
	return true;
}
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        bool flag = true;
        for (long long i = 0; i < n - i - 1; i++) {
            if(a[i] != a[n - i - 1]) {
                flag = checkPalindrome(a, a[i]) || checkPalindrome(a, a[n - i - 1]);
                break;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}