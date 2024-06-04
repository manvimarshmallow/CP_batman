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


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int a , b, c;
    cin>>a>>b>>c;
    
    if((a+b+c)%2)
    {
        cout<<-1;
    }
    else if(a+b>=c)
    {
        cout<<(a+b+c)/2;
    }
    else if(a+b<c)
    {
        cout<<a+b;
    }
    
    cout<<endl;
   } 
}