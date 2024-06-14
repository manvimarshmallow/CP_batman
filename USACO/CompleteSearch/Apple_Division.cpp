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

void solve(vector<ll> v, int index, ll running_sum, ll sum, ll& ans)
{
    if(index == v.size()){
        if(running_sum == sum)
            return;
        // cout << running_sum << " " << sum << " " << ans << "\n";
        ans = min(ans, abs(2*running_sum-sum));
        return;
    }
    solve(v, index+1, running_sum+v[index], sum, ans);
    solve(v, index+1, running_sum, sum, ans);
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0, ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    solve(v, 0, 0, sum, ans);
    cout << ans << '\n';
    return 0;
}