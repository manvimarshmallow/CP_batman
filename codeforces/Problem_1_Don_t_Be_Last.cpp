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
bool compare(std::pair<std::string ,int> i, pair<std::string, int> j) {
  return i.second < j.second;
}
void setIO(string s)
{
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}
int main()
{   //setIO("notlast");
    map < string, int > m;
    int n;
    cin>>n;
    while(n--)
    {
        int i;
        string s;
        cin>>s>>i;
        m[s]=m[s]+i;
    }

pair<string,int> min =*min_element(m.begin(), m.end(), compare); 

if(m.size()<6)
cout<<"tie";
else if(m.size()==6)
{
  m.erase(min.first);
  count  
}
cout<<min.second;
else{
    int f=0;
    for(auto &it: m)
    {
    if(min.second==it.second)
    m.erase(it.first);
    }
    min =*min_element(m.begin(), m.end(), compare); 
    m.erase(min.first);
    for(auto &it: m)
    {
    if(min.second==it.second)
    {
    cout<<"tie";
    f=1;
    break;
    }
    }
    if(f==0)
    cout<<min.first;
}
}
