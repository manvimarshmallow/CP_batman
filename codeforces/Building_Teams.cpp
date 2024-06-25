#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef vector<pii> vii;
int n, m;
vector<int> adj[1000];
vector<int> colour(n);
void dfs(int k)
{
    if(adj[k].size()==0)
    {
        return;
    }
    else
    {
        for(int i=1;i<n+1;i++)
        {
            if(colour[k]==1)
            {
                colour[adj[k][i]]=2;
                dfs(i);
            }
            else
            {
                colour[i]=1;
                dfs(i);
            }
        }
    }
}
void setIO(string s)
{
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}
int main()
{
    int a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
  
    for(int i=1;i<n+1;i++)
    {
        if(colour[i]==0)
        {
            colour[i]=1;
            dfs(i);
        }
    }



}