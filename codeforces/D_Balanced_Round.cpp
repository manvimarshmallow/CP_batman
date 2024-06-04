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
    int n,k;
    cin>>n>>k;
    vi v,c;
    int p;
   for(int i=0;i<n;i++)
    {
    cin>>p;
    v.push_back(p);
    }
    sort(all(v));  
    for(int i=0;i<n-1;i++)
    {
      if(v[i+1]-v[i]>k)
      c.push_back(i);
    }
   if(c.size()==0)
   {
    cout<<0;
   }
   if(c.size()==1)
   {
    cout<<min(c[0]+1,n-c[0]-1);
   }
   else if(c.size()>1)
   {
  int  diff=n-c[c.size()-1];
    for(int i=1;i<c.size()-1;i++)
{
    diff=max(diff,c[i+1]-c[i]);
}
    cout<<min(diff,c[0]+1);
   }
   cout<<endl;
 }  

}