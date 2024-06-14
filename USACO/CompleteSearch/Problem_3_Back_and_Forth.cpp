#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
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


set<int> total;

void solve(int day, int tank_a, int tank_b, vi a, vi b)
{
    
    if(day == 4)
    {
        total.insert(tank_a);
        return;
    }
    for(int i=0; i < a.size(); i++)
    {
        int milk = a[i];
        vi copy_a = a;
        copy_a.erase(copy_a.begin()+i);
        vi copy_b = b;
        copy_b.push_back(milk);

        // Switch A and B 
        solve(day+1, tank_b+milk, tank_a - milk, copy_b, copy_a);
    }

}
int main()
{
    setIO("backforth");
    vi a(10), b(10);
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    for (int i = 0; i < 10; i++)
        cin >> b[i];
    solve(0, 1000, 1000, a, b);
    cout << total.size() << "\n";
    return 0;
}