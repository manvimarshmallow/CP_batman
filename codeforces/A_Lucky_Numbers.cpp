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
int dig(int n)
{
int ma=n%10;
int mi=n%10;
while(n)
{
ma = max(ma,n%10);
mi = min(mi,n%10);
n=n/10;
}

return ma-mi;
}
int main()
{
int t;
cin>>t;
while(t--)
{
int a , b;
cin>>a>>b;
if(b-a>=99)
{
if(a/100*100+90>=a)
cout<<a/100*100+90;
else if((b/100)*100+90<=b)
cout<<(b/100)*100+90;
else
cout<<(b/100)*100-10;
}
else
{
int c=0;int out=a;
int i;
for(i=a; i<=b;i++)
{
    int d=dig(i);
    

if(d==9)
{
    cout<<i;
    break;
}
if(d>c)
{
c=d;
out=i;
}
}
if(i==b+1)
cout<<out;
}
    
cout<<endl;
}
}