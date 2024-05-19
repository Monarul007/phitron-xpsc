#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    map<int, int> factors;
	for(int i = 0; i < N; i++){
        int strength;
		cin >> strength;

		int root = sqrt(strength);
		for(int i = 2; i <= root; i++){
			if(strength % i == 0){
                factors[i]++;
            }
			while(strength % i == 0){
                strength /= i;
            }
		}
		if(strength > 1) factors[strength]++;
    }

	int ans = 1;
	for(auto it = factors.begin(); it != factors.end(); it++){
		ans = max(ans, (*it).second);
	}
	cout << ans << '\n';

    return 0;
}