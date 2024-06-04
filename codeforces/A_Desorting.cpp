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
    while(t--){
        int n;
        cin >> n;
        vi v(n);
        bool issorted = true;
        for(int i=0;i<n;i++)
            cin >> v[i];
        int min_diff = INT_MAX;
        for(int i=1;i<n;i++)
        {
            if(v[i] < v[i-1])
            {
                issorted = false;
                break;
            }
            else{
                min_diff = min(min_diff, v[i]-v[i-1]);
            }
        }
        if(issorted)
        {
            if(min_diff%2 == 0)
            {
                cout << min_diff/2+1 << "\n";
            }
            else{
                cout << min_diff/2+1 << "\n";
            }
        }
        else{
            cout << 0 << "\n";
        }
    }
}