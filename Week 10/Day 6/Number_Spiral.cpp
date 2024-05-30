#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--){
        ll y, x;
        cin >> y >> x;
        
        if(y > x){
			if(y%2) cout << (y-1)*(y-1) + 1 + (x-1);
			else cout << y*y - (x-1);
		}else{
			if(x%2) cout << x*x - (y-1);
			else cout << (x-1)*(x-1) + 1 + (y-1);
		}
		cout << '\n';
    }

    return 0;
}