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
    int n;
    cin>>n;
    map <string, int> m;
    map <string, int> y;
    y["Ox"]=0;
    y["Tiger"]=1;
    y["Rabbit"]=2;
    y["Dragon"]=3;
    y["Snake"]=4;
    y["Horse"]=5;
    y["Goat"]=6;
    y["Monkey"]=7;
    y["Rooster"]=8;
    y["Dog"]=9;
    y["Pig"]=10;
    y["Rat"]=11;

    m["Bessie"]=0;
    for(int i;i<n;i++)
    {
        string s,a,b,c,d;
        cin>>s>>a>>a>>b>>c>>a>>a>>d;
        if(b=="previous")
        {
            if(((m[d]/12)*12+y[c])<m[d])
            m[s]=((m[d]/12)*12+y[c]);
            else if(((m[d]/12-1)*12+y[c])<m[d])
            m[s]=((m[d]/12-1)*12+y[c]);
            else
            m[s]=((m[d]/12-2)*12+y[c]);
        }
        else
        {
           if(((m[d]/12-1)*12+y[c])>m[d])
            m[s]=((m[d]/12-1)*12+y[c]);
            else if(((m[d]/12)*12+y[c])>m[d])
            m[s]=((m[d]/12)*12+y[c]); 
            else
            m[s]=((m[d]/12+1)*12+y[c]); 
        }
       

    }
   cout<<abs(m["Elsie"]);
    
}