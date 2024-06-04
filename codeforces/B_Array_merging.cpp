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
    map <int,int> ma;
    map <int,int> mb;
    vi a;
    vi b;
    for(int i=0;i<n;i++)
    {int k;
    cin>>k;
    a.push_back(k);
    }
    for(int i=0;i<n;i++)
    {int k;
    cin>>k;
    b.push_back(k);
    }
    int k=1;
    
    for(int i=1;i<n;i++)
    {
      if(a[i]==a[i-1])
      k++;
      else
      {
       if(ma.find(a[i-1])==ma.end())
       ma[a[i-1]]=k;
       else
       ma[a[i-1]]=max(ma[a[i-1]],k);
       
       k=1;
      }
    }
    if(ma.find(a[n-1])==ma.end())
       ma[a[n-1]]=k;
       else
       ma[a[n-1]]=max(ma[a[n-1]],k);
    
    k=1;
   
   
    for(int i=1;i<n;i++)
    {
      if(b[i]==b[i-1])
      k++;
      else
      {if(mb.find(b[i-1])==mb.end())
       mb[b[i-1]]=k;
       else
       mb[b[i-1]]=max(mb[b[i-1]],k);
       k=1;
      }
    }
    if(mb.find(b[n-1])==mb.end())
       mb[b[n-1]]=k;
       else
       mb[b[n-1]]=max(mb[b[n-1]],k);
    int c=0;
    for(auto &it: ma)
    {
      if(mb.find(it.first)==mb.end())
      c=max(c,it.second);
      else
      {c=max(c,mb[it.first]+it.second);
      mb.erase(it.first);
      }
    }
    for( auto &it: mb)
    {
      c=max(c,it.second);
    }
    cout<<c<<endl;
    }
}