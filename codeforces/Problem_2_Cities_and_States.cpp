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
#include <unordered_set>
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
    setIO("citystate");
    map <pair<string, string>, int > m;

    int n;
    cin>>n;
    int k=0;
    while(n--)
    {
        string a,b,c;
        cin>>a>>b;
       c=a.substr(0,2);
      
       m[make_pair(c,b)]=1;
    }
    for( auto &it : m)
    {pair <string,string> temp;
    temp.first=it.second;
    temp.second=it.first;
        if(m[it]==m[temp])
        k++;

    }

    cout<<k/2;
   
}