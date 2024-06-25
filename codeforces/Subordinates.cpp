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

void setIO(string s)
{
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}
int n;
void dfs(int s, int e)
{
    count[s] = 1;
    for (auto u : adj[s])
    {
        if (u == e)
            continue;
        dfs(u, s);
        count[s] += count[u];
    }
}
vector<int> adj[100000];
int main()
{
    cin >> n;
    int k;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> k;
        adj[k].push_back(i);
    }
    for (int i = 1; i < n + 1; i++)
    {
            
    }
}  