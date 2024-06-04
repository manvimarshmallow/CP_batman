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
pair<ll, ll> navigator(pair<ll, ll> init, string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case 'U':
        {
            init.second = init.second + 1;
            break;
        }
        case 'R':
        {
            init.first = init.first + 1;
            break;
        }
        case 'D':
        {
            init.second = init.second - 1;
            break;
        }
        case 'L':
        {
            init.first = init.first - 1;
            break;
        }
        }
    }
    return init;
}
int func(pair<ll,ll> a ,pair<ll,ll> b)
{
    return abs(a.first-b.first)+abs(a.second-b.second);
}
check() void setIO(string s)
{
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}
int main()
{
    ll x, y, a, b;
    cin >> a >> b;
    cin >> x >> y;
    ll n;
    cin >> n;
    string s;
    cin >> s;
    pair<ll, ll> init = {x, y};
    pair<ll, ll> fin = {a, b};
    pair<ll, ll> wind = navigator(init, s);
    

}