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
        vector<int> a;
        vector<int> b;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n + 1; i++)
        {
            cin >> x;
            b.push_back(x);
        }
        int steps = 0;
        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            steps = steps + abs(a[i] - b[i]);
            if ((b[n] <= a[i] && b[n] >= b[i]) || (b[n] >= a[i] && b[n] <= b[i]))
            {
                flag = 1;
            }
        }
        
        if (flag)
        {
            cout << steps + 1;
        }
        else
        {
            int low = min(*min_element(all(a)), *min_element(b.begin(), b.end() - 1));
            int high = max(*max_element(all(a)), *max_element(b.begin(), b.end() - 1));
            if (b[n] > high)
            {

                cout << steps + (b[n] - high) + 1;
            }
            else
            {

                cout << steps + (low - b[n]) + 1;
            }
        }
        cout << endl;
    }
}