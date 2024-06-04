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
 int n,q;
 cin>>n>>q;
 vi v(n);
 vii p(q);
 for(int i=0;i<n;i++)
 {
    cin>>v[i];
 }
 for(int i=0;i<q;i++)   
 {
cin>>p[i].first>>p[i].second;
 }
 vi sum(n+1);
 sum[0]=0;

 for(int i=0; i<n;i++)
 {
    sum[i+1]=sum[i]+v[i];
 }
for(int i=0;i<q;i++)
{
    cout<<sum[p[i].second]-sum[p[i].first]<<endl;
}
}