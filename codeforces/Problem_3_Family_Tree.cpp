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
int getIndex(vector<string> v, string K)
{
    auto it = find(v.begin(), v.end(), K);
    // If element was found
    if (it != v.end())
    {
        // calculating the index
        // of K
        int index = it - v.begin();
        return index;
    }
    else
    {
        // If the element is not
        // present in the vector
        return -1;
    }
}
int main()
{
    int n;
    string a, b;

    cin >> n >> a >> b;
    map<string, vector<string>> family;
    map<string, string> md;
    for (int i = 0; i < n; i++)
    {
        string mom, daughter;
        cin >> mom >> daughter;
        if (family.find(mom) != family.end())
        {
            family[mom].push_back(daughter);
        }
        else
        {
            vector<string> v;
            v.push_back(daughter);
            family.insert({mom, v});
        }
        md.insert({daughter, mom});
    }
    if (md[a] == md[b])
    {
        cout << "SIBLINGS";
    }
    else // check for common ancestor
    {
        string current = a, current_ki_mom = md[a];
        vector<string> lina, linb;
        int i = 0;
        bool flag = false;
        while (md.find(current_ki_mom) != md.end())
        {
            i++;
            if (current_ki_mom == b)
            {
                flag = true;
                break;
            }
            lina.push_back(current_ki_mom);
            current = current_ki_mom;
            current_ki_mom = md[current];
        }
        int j = 0;
        if (!flag)
        {
            current = b;
            current_ki_mom = md[b];
            int t;
            while (md.find(current_ki_mom) != md.end())
            {
                linb.push_back(current_ki_mom);
                j++;
                if (getIndex(lina, current_ki_mom) != -1)
                {
                    t = getIndex(lina, current_ki_mom);
                    break;
                }
                current = current_ki_mom;
                current_ki_mom = md[current];
            }
            if (t < j+1)
            {
                cout << a << " is the ";
                for (int k = 0; k < j - t+1; k++)
                {
                    cout << " great-";
                }
                cout << "aunt of " << b;
            }
            else if( t >j+1)
            {
                cout << b << " is the ";
                for (int k = 0; k < t - j+1; k++)
                {
                    cout << "great-";
                }
                cout << "aunt of " << a;
            }
            else
            cout<<""
        cout<<
        }
        else
        {
            cout << a << " is the ";
            for (int k = 0; k < i-2; k++)
            {
                cout << " great-";
            }
            cout << "mother of " << b;
        }
    }
}