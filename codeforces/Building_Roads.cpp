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

map<int, vector<int>> roads;
int n, m;
bool visited[100000];
void dfs(int k)
{
    if (visited[k])
    {
        return;
    }
    else
    {
        visited[k] = true;
        for (int i : roads[k])
        {
            dfs(i);
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
        vector<int> va, vb;
        if (roads.find(a) != roads.end())
        {
            roads[a].push_back(b);
        }
        else
        {
            vb.push_back(b);
            roads.insert({a, vb});
        }
        if (roads.find(b) != roads.end())
        {
            roads[b].push_back(a);
        }
        else
        {
            va.push_back(a);
            roads.insert({b, va});
        }
    }
    map<int, int> newroads;
    dfs(a);
    for (int i = 1; i < n + 1; i++)
    {
        if (visited[i] == false)
        {
            roads[a].push_back(i);
            roads.insert({i, {a}});
            newroads.insert({i, a});
            dfs(i);
        }
    }
    cout<<newroads.size()<<endl;
    for (auto &m: newroads)
    {
        cout<<m.first<<" "<<m.second<<endl;
   
    }
    
}