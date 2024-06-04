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
    {   int n;
        cin>>n;
        string s;
        cin >> s;
        vector<char> nums;
        vector<char> letters;
        int flag = 0;
        int invalid = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9' && flag == 0)
            {
                nums.push_back((s[i]));
            }
            else if (!(s[i] >= '0' && s[i] <= '9'))
            {
                flag = 1;
                letters.push_back(s[i]);
            }
            else if (s[i] >= '0' && s[i] <= '9' && flag == 1)
            {
                invalid = 1;
                break;
            }
        }
        if (invalid)
        {
            cout << "NO" << endl;
        }
        else
        {   vector<char> num2=nums;
            vector<char> let2=letters;
            sort(all(nums));
            sort(all(letters));
            if(letters==let2 && num2==nums)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
