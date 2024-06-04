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
    if(n%2==0)
    {
        cout<<n/2<<" "<<n/2; 
   }
   else 
   {int k=0;
    int c= n/2;
    int d= n/2+1;
    while(d%10==0)
    {
        k++;
        d=d/10;
        c=c/10;
    }
    if(c||k==0)
    cout<<c;
    for(int i=0;i<k;i++)
    if(i%2==0)
    cout<<5;
    else
    cout<<4;
    cout<<" "<<d;
    for(int i=0;i<k;i++)
    if(i%2==1)
    cout<<5;
    else
    cout<<4;
   }
   cout<<endl;

    }
}