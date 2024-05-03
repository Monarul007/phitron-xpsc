#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, y;
    cin >> n >> x >> y;
    int copies = 1;
    int time = 0;

    while(copies < n){
        if (copies % 2 == 1) {
            time += x;
        }else{
            time += y;
        }
        copies *= 2;
    }
    cout << time << '\n';

    return 0;
}