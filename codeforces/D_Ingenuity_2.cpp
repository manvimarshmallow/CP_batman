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
    cin >> t;
    while (t--)
    {
        string str;
        int k;
        cin >> k;
        cin >> str;
        int n = 0; int s = 0; int e = 0; int w = 0;
        for (auto c : str)
        {
            if (c == 'N')
                n++;
            if (c == 'S')
                s++;
            if (c == 'E')
                e++;
            if (c == 'W')
                w++;
        }
        if ((s - n) % 2 || (w - e) % 2)
        {
            cout << "NO"<<endl;
        }
        else if(str=="NS"||str=="SN"||str=="EW"||str=="WE")
        {
            cout << "NO"<<endl;          
        }
        else
        {
            int flag_north, flag_east;
            if (n % 2)
            {
                flag_north = 0;
            }
            else
            {
                flag_north = 1;
            }
            if (e % 2)
            {
                flag_east = 0;
            }
            else
            {
                flag_east = 1;
            }
            int f=0;
            int k=0;
            for (int i = 0; i < str.size(); i++)
            {   
                
                if(flag_north!=1)
                {
                if (str[i] == 'N')
                {
                   k=1;
                   flag_north=1;
                   str[i]='H';
                }
                }
                else if(str[i]=='S'&& k)
                {
                    str[i]='H';
                    k=0;
                }
                else if(str[i]=='N')
                {
                  if(f)
                  {str[i]='R';
                  f=0;}
                  else
                  {str[i]='H';
                  f=1; } 
                }
            }
            f=0;
            k=0;
            for (int i = 0; i < str.size(); i++)
            {  
                if(flag_east!=1)
                {
                if (str[i] == 'E')
                {
                   k=1;
                   flag_east=1;
                   str[i]='R';
                }
                }
                else if(str[i]=='W'&& k)
                {
                    str[i]='R';
                    k=0;
                }
                else if(str[i]=='E')
                {
                  if(f)
                  {str[i]='R';
                  f=0;
                  }
                  else{
                  str[i]='H';  
                  f=1;
                  }
                }

            }
            f=0;
            for(int  i = 0; i < str.size(); i++)
            {
                
                if(str[i]=='W')
                {
                  if(f)
                  {str[i]='R';
                  f=0;
                  }
                  else{
                  str[i]='H';  
                  f=1;
                  }
                }
            }
            f=0;
            for(int  i = 0; i < str.size(); i++)
            {
                
                if(str[i]=='S')
                {
                  if(f)
                  {str[i]='R';
                  f=0;
                  }
                  else{
                  str[i]='H';  
                  f=1;
                  }
                }
            }
            cout<<str<<endl;
        }
    }
}