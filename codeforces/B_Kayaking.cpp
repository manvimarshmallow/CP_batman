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
int nxt()
{
    int t;
    cin>>t;
    return t;
}
int main()
{ 
    
   int k=2*nxt();
   vi v;
   while (k--)
   {
    v.push_back(nxt());
   }
   sort(all(v));
   int c=0;
   vi temp;
   int s=0,smin=1000;
   for(int k=0;k<v.size()-1;k++)
   for(int j=1;j<v.size();j++)
   {temp=v;
 v.erase(v.begin()+j);
  v.erase(v.begin()+k);
   for(;v.size()>=0;)
 { 
    int diff=v[1]-v[0];
for(int i=0;i<v.size()-1;i++)
  {
if(v[i+1]-v[i]<diff)
{
c=i;

diff=v[i+1]-v[i];

}
  }
 v.erase(v.begin()+c);
 v.erase(v.begin()+c);
 cout<<s<<" ";
 s=s+diff;
 }
smin=min(s,smin);
s=0;
 v=temp;
    }
     cout<<smin;
 
    
}