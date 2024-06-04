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
{   string mel= "ABCDEFG";
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        map<char,int> f;
        for(int i=0;i<mel.size();i++)
        {
            f[mel[i]]=0;
        }
        cin>>n>>m;
        string s;
        cin>>s;
        int r=0;
        for(int i=0;i<n;i++)
        {
          f[s[i]]++;  
        }
        for(int i=0;i<mel.size();i++)
        {
           if(f[mel[i]]< m)
           {
            r=r+m-f[mel[i]];
           }
        }
        cout<<r<<endl;



    }
}