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
#include <map>
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
int choice(int x)
{
return x*(x-1)/2;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   map <int,int> sum;

        int n;
        cin>>n;
        ll b;
        cin >>b;
        int a[n+1],s[n+1];
        a[0]=0;
        s[0]=0;
        for(int i=1;i<n+1;i++)
        {
            
            s[i]=s[i-1]+a[i];
        }

        for(int i=0;i<n+1;i++)
        {  
             if(sum.find(s[i]-i)==sum.end())
            { sum[s[i]-i]=1;
             //cout<<sum[s[i]-i];
             }
            else
            {sum[s[i]-i]++;
            }
        }
        // Get an iterator pointing to the first element in the map
        map<int, int>::iterator it = sum.begin();
        int x=0;
        // Iterate through the map and print the elements
        while (it != sum.end())
        {
        x = x+choice(it->second);
            // cout<<it->second;
            ++it;
        }
        cout<<x<<endl;
    }

}