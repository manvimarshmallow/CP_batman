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
int check(int d, vector <int> starts,vector <int> ends)
{  int cows=0;
    for(int i=0;i< starts.size();)
    {
        if(starts[i]<ends[i]||starts[i]==ends[i])
        {
            cows++;
            starts[i]=starts[i]+d;
        }
        else
        {
            i++;
        }
    }
    return cows;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> starts(m),ends(m);
    for(int i=0;i<m;i++)
    {
        cin>>starts[i]>>ends[i];
    }
    int D_high=ends[m-1]-starts[0];
    int D_low=0;
    while(D_high > D_low)
    {
        int mid=(D_high+D_low)/2;
        if(check(mid,starts,ends)>n)
        {
            D_low=mid+1;
        }
        else
        {
            D_high=mid-1;
        }
    }
    cout<<D_low;

}