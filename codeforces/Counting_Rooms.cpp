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
const int MAX_N = 1000;

char grid[MAX_N][MAX_N]; // the input grid itself
int row_num;
int col_num;
int visited[MAX_N][MAX_N] = {}; // keeps track of which nodes have been visited and their colours
int curr_size = 0;              // reset to 0 each time we start a new room

void floodfill(int r, int c, int color)
{
    if ((r < 0 || r >= row_num || c < 0 || c >= col_num) // if out of bounds
        || grid[r][c] != '.'                             // wrong color
        || visited[r][c] !=0                       // already visited this square
    )
       { return;}

    visited[r][c] = color; // mark current square as visited
        // increment the size for each square we visit

    // recursively call flood fill for neighboring squares
    floodfill(r, c + 1, color);
    floodfill(r, c - 1, color);
    floodfill(r - 1, c, color);
    floodfill(r + 1, c, color);
}

int main()
{
    cin >> row_num >> col_num;
    for (int i = 0; i < row_num; i++)
    {
        for (int j = 0; j < col_num; j++)
        {
            cin>>grid[i][j];
        }
    }
    // cout<<visited[0][0]<<" ";
    int roomcolour=1;
    for (int i = 0; i < row_num; i++)
    {
        for (int j = 0; j < col_num; j++)
        {
            if (visited[i][j]==0 && grid[i][j]=='.')
            {
                floodfill(i, j, roomcolour);
                roomcolour++;
            }
        }
    }
    cout<<roomcolour-1;
    return 0;
}