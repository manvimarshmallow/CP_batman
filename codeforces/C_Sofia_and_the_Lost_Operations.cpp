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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        vector<ll> c;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] != a[i])
            {
                c.push_back(b[i]);
            }
        }
        int m;
        cin >> m;
        vector<ll> d(m);
        for (int i = 0; i < m; i++)
        {
            cin >> d[i];
        }
        sort(all(d));
        sort(all(c));
        vector<ll> e;
        if (c.size() > m)
        {
            cout << "NO";
        }
        else
        {
            int temp=1;
            for (int i = 0; i < c.size(); i++)
            {   auto it= find(d.begin(),d.end(), c[i]);
                if (it != d.end())
                {
                   d.erase(it);
                }
                else
                {
                    cout<<"NO";
                    temp=0;
                    break;
                }

            }
            if(temp==1)
            {
                for(int i = 0; i < d.size(); i++)
                {
                    auto it= find(a.begin(),a.end(), d[i]);

                }
            }

        }
    }
}