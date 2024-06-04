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
   cin>>t;
   while(t--)
   {
    int x,y;
    cin>>x>>y;
    int fourer= (y+1)/2;
    int left= fourer*15-4*y;
    if(x<=left)
    {
        cout<<fourer;
    }
    else if((x-left)%15)
    {
        cout<<fourer+(x-left)/15+1;
    }
    else
    {
       cout<<fourer+(x-left)/15;  
    }
    cout<<endl;
   } 
}