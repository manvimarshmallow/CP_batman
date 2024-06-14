#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> pii;
 
// void setIO(string s)
// {
//     freopen((s + ".in").c_str(), "r", stdin);
//     freopen((s + ".out").c_str(), "w", stdout);
// }
void dfs(int node, vector<bool> &visited, vector<vi> &adj)
{
    visited[node] = true;
    for (auto u : adj[node])
    {
        if (!visited[u])
            {
                dfs(u,visited,adj);
            }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vi> adj(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].push_back(--b);
        adj[b].push_back(a);
    }
    vector<bool> visited(n);
    int count = 0;
    vector<int> roads(n);
    for(int i=0;i<=n-1;i++)
    {
        if(!visited[i]){
            roads[count++] = i+1; 
            // cout << i+1 << "\n";
            dfs(i,visited,adj);
        }
    }
    cout << count-1 << "\n";
    for(int i=1;i<count;i++)
    {
        cout << roads[i-1] << " " << roads[i] << "\n";
    }
}