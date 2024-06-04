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
        if(n==2)
        {
            ll a, b;
            cin>>a>>b;
            cout<<a*b<<endl;
        }
        else{
        int c=n;
        ll k;
        ll maxp1=0,maxp2=0;
        ll maxn1=0,maxn2=0;
         for(int i=0;i<n;i++)
         {
           cin>>k;
           if(k==0)
           c--;
           else if(k>0)
           { 
           if(k>maxp2)
           {maxp1=maxp2;
            maxp2=k;}
           else if(k>maxp1)
           maxp1=k;
           } 
           else
           {
           if(k<maxn2)
           {
           maxn1=maxn2;
           maxn2=k;
           }
           else if(k<maxn1)
           maxn1=k;
           }

         }
         cout<<max(maxn1*maxn2,maxp1*maxp2)<<endl;


        }
    }
}