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
    string s;
    cin>>s;
    int n= s.length();
    int k;
    for( k=1; k<n/2;k=k+2)
{
int d=0,c=0;
for(int i=0;i+k<n;i=i+k)
{
if(s[i]==s[i+k])
c++;
}
if(c+1>=n/k)
break;
for(int i=1;i+k<n;i=i+k)
{
if(s[i]==s[i+k])
d++;
}
if(d+1>=n/k)
break;
}
cout<<k/2;
    cout<<endl;
   } 
}