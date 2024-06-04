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
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    int l=0,r=n-1;
for(int i=l;i<r;i++)
{
    if(a[i]!= b[i])
    {
        l=i;
        break;
    }
}
for(int i=r;i>l;i--)
{
    if(a[i]!=b[i])
    {
        r=i;
        break;
    }
}for(int i=0;i<=l;i++)
{
if(l!=0&&b[l]>=b[l-1])
l=l-1;
else
break;
}
for(int i=r;i<=n-1;i++)
if(r!=n-1&&b[r]<=b[r+1])
r=r+1;
else 
break;

cout<<l+1<<" "<<r+1<<endl;


   } 
}