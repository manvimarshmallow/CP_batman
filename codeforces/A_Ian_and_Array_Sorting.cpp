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
    {int n;
    cin>>n;
        int a[n];
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
       }
        if(a[1]<a[0]&&n==2)
       cout<<"no";
       else if{
       for(int i=n;i>1;i--)
       {
         if(a[i]<a[i-1])
         while(a[i]-a[i-1]){
         a[i-2]--;
         a[i-1]--;
       }
       }
      
       }
    }

}