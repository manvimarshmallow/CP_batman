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
int walk(vector<int> first_barn, vector<int> second_barn, int day, int tank1, int tank2)
{
    for (int i : first barn)
    {
        tank1 -= i;
        tank2 += i;
        if (tank1 > 0 || tank2 > 0)
        {
            
        }
    }
}
int main()
{
    vector<int> first_barn(10);
    vector<int> second_barn(10);
    for (int i = 0; i < 10; i++)
    {
        cin >> first_barn[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> second_barn[i];
    }
}