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
    vector<int>v(n);
    for(int i;i<n;i++){
        cin>>v[i];

    }
    vector<pair<int,int>>v1;
    vector<pair<int,int>>v2;
    vector<pair<int,int>>v3;
    vector<pair<pair<int,int>,int>>v4;
    vector<pair<pair<int,int>,int>>v5;
   vector<pair<pair<int,int>,int>>v6;
    for(int i=0;i<n-2;i++){
        v1.push_back({v[i],v[i+1]});
        v2.push_back({v[i+1],v[i+2]});
        v3.push_back({v[i+2],v[i]});
        v4.push_back({{v[i],v[i+1]},v[i+2]});


    }



   } 
}