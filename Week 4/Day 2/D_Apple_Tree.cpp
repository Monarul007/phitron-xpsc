#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6+5;

vector<ll> adj[N];
vector<ll> leafs;

void dfs(int curr, int par){
	bool hasChild = false;
	for(auto i : adj[curr]){
		if(i == par)continue;
		hasChild = true;
        dfs(i, curr);
		leafs[curr] += leafs[i];
	}
	if(!hasChild){
		leafs[curr] = 1;
	}
}

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        for(int i = 0; i <= n; i++){
            adj[i].clear();
        }
        
        leafs.assign(n+2, 0);
        for(int i = 1; i <= n-1; i++){
            ll u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1, -1);
        int q;
        cin >> q;
        while(q--){
   			int x, y;				
            cin >> x >> y;
   			ll ans = leafs[x] * leafs[y];
   			cout << ans << endl;
   		}
    }

    return 0;
}