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
int choice(int x)
{
return x*(x-1)/2;
}
int main()
{
   setIO("div7");
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
 } 
 ll sum[n+1];
 sum[0]=0;
 for(int i=0;i<n;i++)
 {
    sum[i]=sum[i-1]+a[i-1];
    
 }
 for(int i=0;i<n;i++)
 {
    sum[i]=sum[i]%7;
 }
 vi f(7);
for(int i=1;i<=n;i++)
{
  f[sum[i]]++;
}
cout<<choice(f[6])+ choice(f[5])+choice(f[4])+choice(f[3])+choice(f[2])+choice(f[1])+choice(f[0])+f[0];

}