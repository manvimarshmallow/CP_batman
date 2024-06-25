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
int main()
{
    ll n, x;
    cin >> n >> x;
    ll a[n];
    ll b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n);
    ll left = 0, right = n - 1;
    while (left < right)
    {
        if (a[left] + a[right] == x)
        {
            break;
        }
        else if (a[left] + a[right] < x)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    if (a[left] + a[right] == x && left != right)
    {
        ll *targetl = find(&b[0], b + n, a[left]);
        ll *targetr = find(&b[0], b + n, a[right]);
        cout << (min(targetl - b, targetr - b) + 1) << " " << max(targetl - b, targetr - b) + 1;
    }
    else
    {
        cout << "IMPOSSIBLE";
    }
}