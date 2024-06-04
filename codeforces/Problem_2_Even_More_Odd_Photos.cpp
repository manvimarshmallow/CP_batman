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
    cin>>n;
    int odds=0,evens=0;
    while(n--)
    {int k;
        cin>>k;
        if(k%2==0)
        evens++;
        else
        odds++;
    }
    if(odds<evens)
    cout<<2*odds+1;
    else if(odds==evens)
    cout<<2*odds;
   else{
    int ans = 2*evens;
        int left = odds-evens;
        int more = left/3;
        int pos  = left%3;
        if(pos == 0)
        {
            ans += 2*more;
        }
        else if(pos == 2)
        {
            ans += 2*more;
            ans++;
        }
        else{
            if(left == 1 || left == 4){
            }
            else{
                left /= 3;
                ans += 2*left-1;
            }
        }
        cout << ans << "\n";
   

   }
    
    
}