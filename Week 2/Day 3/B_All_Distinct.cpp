#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int t; 
    cin >> t;
    while(t--){
        int n, size = 0;
        cin >> n;
        set<int> set;
        for (int i = 0; i < n; i++){
            int a;
            cin >> a;
            set.insert(a);
        }
        size = set.size();
        if(n % 2 != size % 2){
            size--;
        }
        cout << size << '\n';
    }
    return 0;
}