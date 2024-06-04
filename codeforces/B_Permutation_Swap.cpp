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
#include <unordered_set>
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
int findMax(set<int> my_set)
{
 
    // Get the maximum element
    int max_element;
    if (!my_set.empty())
        max_element = *my_set.rbegin();
 
    // return the maximum element
    return max_element;
}
int nxt()
{int t;
    cin>>t;
    return t;
}
int main()
{
   int t=nxt();
   while(t--)
   {
    int n=nxt();
    int a[n];
    for(int i=0;i<n;i++)
    {
      a[i]=abs(nxt()-i-1);
    }
    sort(a,a+n);
    int i;
    int k=1;
    for( i=0;i<n;i++)
    if(a[i])
    {k=gcd(k,a[i]);
    }
    if(i==n&&a[n-1]==0)
    cout<<0;
    cout<<endl;

   } 
}