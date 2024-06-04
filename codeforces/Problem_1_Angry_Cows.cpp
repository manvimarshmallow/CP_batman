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
int check(vector<int> v, int k, int r)
{
    int init = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if ((v[i] - init ) >  2 * r)
        {
            init = v[i];
            k = k - 1;
        }
    }
    return k;
}
int main()
{   
    setIO("angry");
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    int r_low = 1;
    int r_high = (v[n - 1] - v[0]) / 2;
    while (r_low < r_high)
    {
        int mid = (r_low + r_high) / 2;
        if (check(v, k, mid) > 0)
        {
            r_high = mid-1;

        }
        else
        {
            r_low = mid+1;
        }
    }
    cout<<r_low;
}
