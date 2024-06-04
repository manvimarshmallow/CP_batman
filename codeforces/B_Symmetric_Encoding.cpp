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
        string s;
        int n;
        cin >> n;
        cin >> s;

        set<char> letters;

        for (int i = 0; i < s.size(); i++)
        {
            letters.insert(s[i]);
        }
        string b;

        int i = 0;
        for (auto it = letters.begin(); it != letters.end(); ++it)
        {
            char c = *it;
            b = b + c;
        }
        string k = b;
        reverse(all(k));
        map<char, char> m;
        for (int i = 0; i < k.size(); i++)
        {
            m[k[i]] = b[i];
        }
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = m[s[i]];
        }
        cout << s;
        cout << endl;
    }
}