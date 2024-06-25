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
int main(int k, vector<vector<int>>v)
{   
    map <int , vector<int>> m;
    for(vector<int> x: v)
    {
        if(m.find(x[0])!=m.end())
        {
            m[x[0]].push_back(x[1]);
        }
        else
        {
            vector <int> temp;
            temp.push_back(x[1]);
            m.insert({x[0],temp});
        }
    }
    vector<int> ans;
    for(auto x: m)
    {   
        vector<int> t= x.second;
        sort(all(t));
        int count=0;
        int check=t[0];
        for(int i=0;i<t.size();i++)
        {
            if(t[i]==check)
            {
                count++;
            }
            else
            {
                count=1;
                check= t[i];
            }
            if(count>k)
            {
                ans.push_back(x.first);
                break;
            }
        }
    }
    cout<<ans.size();
}