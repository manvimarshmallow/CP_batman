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
int m;
vector<vector<int>> cows, ac;
vector<int> subset;
int compute(vector<vector<int>> accheck)
{
    bool flag = true;
    vector<int> stables(100);
    int money = 0;
    for (vector<int> v : accheck)
    {
        for (int i = v[0]; i <= v[1]; i++)
        {
            stables[i] = stables[i] + v[2];
        }
        money = money + v[3];
    }
    for (vector<int> v : cows)
    {
        for (int i = v[0]; i <= v[1]; i++)
        {
            if (stables[i] < v[2])
            {
                flag = false;
            }
        }
    }
    if(flag)
    {
        return money;
    }
    else
    {
        return -1;
    }
}
int mincost=0;
void cost(int k)
{
    if (k == m)
    {
        vector<vector<int>> aacheck;
        for(int i: subset)
        {
           aacheck.push_back(ac[i]);
        }
        int cost= compute(aacheck);
        if(cost!=-1)
        {
           mincost=min(mincost,cost);
        }
    }
    else
    {
        cost(k + 1);
        subset.push_back(k);
        cost(k + 1);
        subset.pop_back();
    }
}

int main()
{
    int n;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        cows.push_back(v);
    }
    sort(all(cows));
    for (int i = 0; i < m; i++)
    {
        vector<int> v(4);
        cin >> v[0] >> v[1] >> v[2] >> v[3];
        ac.push_back(v);
        mincost=mincost+ v[3];
    }
    cost(0);
    cout<<mincost;
    

}