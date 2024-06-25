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
    ll n;
    ll t;
    cin >> n >> t;
    ll books[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> books[i];
    }
    ll x = 0;
    ll bot = 0, top = 0;

    while (bot < top + 1)
    {
        if (top < n)
        {
            if (sum < t + 1)
            {
                sum = sum + books[top];
                top++;
                if(sum < t + 1)
                {x = max(top - bot, x);}
            }
            else
            {  
                sum = sum - books[bot];
                bot++;
                if(sum < t + 1)
                {x = max(top - bot, x);}
            }
        }
        else
        {
            break;
        }
    }
    
    cout << x;
}