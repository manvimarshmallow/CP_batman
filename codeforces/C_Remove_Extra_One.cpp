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
    int n;
    cin >> n;
    vector<int> v(n);
    int max_pos, stop = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == n)
        {
            max_pos = i;
        }
        if (v[i] == n - 1)
        {
            stop = i;
        }
    }
    int perma_stop=max_pos;
    vector <pair<int, int> > store;
    int c = 0;
    int start;
    while (c != v[max_pos]-1 || stop == 0)
    {
        int i = 1;
        if (max_pos != 0)
        {
            start = v[0];
        }
        else if (n > 1)
        {
            start = v[1];
        }
        else
        {
            cout<<v[0];
            break;
        }
        c=0;
        while (i <= stop)
        {
            if (v[i] > start && i != max_pos)
            {
                c++;
                start = v[i];
            }
            i++;
        }
        store.push_back(make_pair(c,v[max_pos]));
      
        max_pos=distance(v.begin(),max_element(v.begin(), v.begin()+max_pos-1));
        stop=perma_stop;

    }

    sort(all(store));
    cout<<store[store.size()-1].first;
}
