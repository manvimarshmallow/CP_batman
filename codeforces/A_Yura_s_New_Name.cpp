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
         int k=0;
        string s;
        cin>>s;
        int n=s.length();
        if(n==1)
        if(s[0]=='^')
        k++;
            if(s[0]=='_')
            k++;
            if(s[n-1]=='_')
            k++;
            for(int i=1; i<s.length(); i++)
             {
                if(s[i]=='_')
                {
                    if(s[i-1]=='_')
                    {
                        s.insert(s.begin()+i,'^');
                        k++;
                        i++;
                    }
                }

             }
             cout<<k<<endl;
 
        }
}