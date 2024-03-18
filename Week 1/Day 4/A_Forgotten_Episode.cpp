#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int n;
    cin >> n;

    bool a[n+1];
    memset(a, false, sizeof(a));
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a[x] = true;
    }
    for(int i = 1; i <= n; i++){
        if(a[i] == false){
            cout << i;
            break;
        }
    }
    
    return 0;
}