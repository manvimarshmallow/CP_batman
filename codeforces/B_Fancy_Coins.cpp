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
    {   int fancy=0;
        int m,k,a,b;
        cin>>m>>k>>a>>b;
        int big=m/k;
        int remaining= m-b*k;
        if(remaining>0)
        {
        int rem=remaining-a;
        if(rem>0)
         {
          int rem1=remaining-max((a/k-1),0)*k;
          int leftreg= a-max((a/k-1),0)*k;
          int fk = rem1/k;
          rem1=rem1-fk*k-leftreg;
          if(rem1>0)
          fancy=fk+rem1;
          else
          fancy=fk;

          int rem2= remaining-a/k*k;
          leftreg= a-a/k*k;
          fk=rem2/k;
          rem2=rem2-fk*k-leftreg;
          if(rem2>0)
          fancy=min(fancy,rem2+fk);
          else
          fancy=min(fancy,fk);
          cout<<fancy<<endl;
         }
         else
         {
          cout<<0<<endl;
         }
        else{
            if(a>=m-big*k)
            cout<<0<<endl;
            else
            int r=m-(big-1)*k;
            if(r-a>0)
            {
                r=r-a;
                
             
            }
            else
            cout<<0;
        }
    }

}