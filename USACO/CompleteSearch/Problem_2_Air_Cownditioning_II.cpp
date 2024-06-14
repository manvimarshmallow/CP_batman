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

int pos(int *arr, vector<pair<pii, pii>> conditioners, vector<int> subset)
{
    int check[101] = {0};
    int cost = 0;
    for (int i = 0; i < subset.size(); i++)
    {
        pair<pii, pii> in_use = conditioners[subset[i]];
        for (int t = in_use.first.first; t <= in_use.first.second; t++)
            check[t] += in_use.second.first;
        cost += in_use.second.second;
    }
    for (int i = 0; i <= 100; i++)
    {
        if (check[i] < arr[i])
            return INT_MAX;
    }
    return cost;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<pii, int>> cows(n);
    int arr[101] = {0};
    for (int i = 0; i < n; i++)
    {
        int si, ti, ci;
        cin >> si >> ti >> ci;
        cows[i] = {{si, ti}, ci};
        for (int j = si; j <= ti; j++)
        {
            arr[j] += ci;
        }
    }
    vector<pair<pii, pii>> conditioners(m);
    for (int i = 0; i < m; i++)
    {
        int ai, bi, pi, mi;
        cin >> ai >> bi >> pi >> mi;
        conditioners[i] = {{ai, bi}, {pi, mi}};
    }
    int ans = INT_MAX;
    for (int t = 0; t < (1 << m); t++)
    {
        vector<int> subset;
        for (int i = 0; i < m; i++)
        {
            if (t & (1 << i))
                subset.push_back(i);
        }
        // Generated Subsets of Conditioners to choose from
        int money = pos(arr, conditioners, subset);
        ans = min(ans, money);
    }
    cout << ans << "\n";
    return 0;
}