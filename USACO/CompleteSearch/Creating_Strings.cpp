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

void solve(string s, set<string> &all, string temp, vector<int> bools)
{
    if (temp.size() == s.size())
    {
        // cout << temp << "\n";
        all.insert(temp);
        return;
    }
    for (int i = 0; i < bools.size(); i++)
    {
        if (bools[i])
            continue;
        bools[i] = true;
        solve(s, all, temp + s[i], bools);
        bools[i] = false;
    }
}
int main()
{
    string s;
    cin >> s;
    set<string> all;
    vector<int> bools(s.size());
    solve(s, all, "", bools);
    cout << all.size() << '\n';
    vector<string> sorted(all(all));
    sort(all(sorted));
    for(auto x : sorted)
        cout << x << "\n";
    return 0;
}