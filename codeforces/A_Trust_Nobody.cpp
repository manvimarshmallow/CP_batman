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
      int a[n];
      for(int i=0;i<n;i++)
      {cin>>a[i];  a[i]=n-a[i];}
      sort(a,a+n);
      int k=0;
      int t=1;
int j;
for( j=0;j<n-1;j++)
{
    if(a[j]==a[j+1])
    t++;
    else
    {
    if(t==a[j])
    break;
    else
    t=1 ;
    }
    
}
if(t==1&&a[n-1]!=1&&a[j-1]!=1)
cout<<-1;
else if(t==n&&a[0]!=t)
cout<<-1;
else 
cout<<n-t;

cout<<endl; 
    
}
}