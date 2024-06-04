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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int flag = 3;
        if (a > b)
        {
            int temp = b;
            b = a;
            a = temp;
        }
        if (c > d)
        {
            int temp = d;
            d = c;
            c = temp;
        }
        for (int i = min(a, c); i < 13; i++)
        {
            if (i == a)
                flag = 1;
            else if (i == c)
                flag = 0;
            if (flag && i == b)
            {
                cout << "no" << endl;
                break;
            }
            else if (flag == 0 && i == d)
            {
                cout << "no" << endl;
                break;
            }
            else if (i == b || i == d)
            {
                cout << "yes" << endl;
                break;
            }
        }
        // cout<<a<<b<<c<<d<<endl;
    }
}