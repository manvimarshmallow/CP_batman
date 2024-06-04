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
#include <unordered_set>
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
 int n,x;
 cin>>n>>x;
 int a[n];
 unordered_set <int> s;
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
 } 
 ll sum[n+1];
 sum[0]=0;
 for(int i=0;i<n;i++)
 {
    sum[i]=sum[i-1]+a[i-1];
    s.insert(sum[i]);
    
 }   
 int before_addition=s.size();
  for(int i=0;i<n;i++)
  s.insert(sum[i]+x);
 
}