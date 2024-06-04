// #include <algorithm>
// #include <bitset>
// #include <complex>
// #include <deque>
// #include <exception>
// #include <fstream>
// #include <functional>
// #include <iomanip>
// #include <ios>
// #include <iosfwd>
// #include <iostream>
// #include <istream>
// #include <iterator>
// #include <limits>
// #include <list>
// #include <locale>
// #include <map>
// #include <memory>
// #include <new>
// #include <numeric>
// #include <ostream>
// #include <queue>
// #include <set>
// #include <sstream>
// #include <stack>
// #include <stdexcept>
// #include <streambuf>
// #include <string>
// #include <typeinfo>
// #include <utility>
// #include <valarray>
// #include <vector>
// using namespace std;
// #define all(x) x.begin(), x.end()
// typedef long long ll;
// typedef vector<int> vi;
// typedef vector<long long> vll;
// typedef pair<int, int> pii;
// typedef vector<pii> vii;

// void setIO(string s)
// {
//     freopen((s + ".in").c_str(), "r", stdin);
//     freopen((s + ".out").c_str(), "w", stdout);
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         string s;
//         cin>>s;
//         int n =s.length();
//         int c=0,k=0;
//         int i;
//         if(n==1)
//         if(s[0]=='0')
//         cout<<0<<endl;
//         else  
//         cout<<1<<endl;
//         else
//         {
//         for( i=0; i<n;i++)
//         {
//             if(s[i]=='0')
//             {   
//             c=max(c,k);
//             k=0;   
//             }
//             else
//             k++;

//         }
//         if(c>=n)
//         cout<<n*n<<endl;
//         else
//         cout<<(c+1)*(c+1)/4<<endl;
//         }
//     }
// }

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
        string s;
        cin>>s;
         ll n =s.length();
        ll c=0,k=0;
        int i;
        for( i=0; i<n;i++)
        {
            if(s[i]=='0')
            {   
            c=max(c,k);
            k=0;   
            }
            else
            k++;

        }
        ll b=0;
        if(s[n-1]=='1'){
        ll k=n-1;
        while(k >= 0 && s[k]=='1')
        {
        b++;
        k--;
        }
        for(int i=0; i<n-1;i++)
        {
            if(s[i]=='0')
            {   
            break;  
            }
            else 
            b++;
        }
        c=max(c,b);
        }

        if(c>=n)
        cout<<(ll)n*n<<endl;
        else
        cout<<(ll)(c+1)*(ll)(c+1)/4<<endl;
    }
}
