/*
 by skydog
 */
#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <cassert>
#include <list>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> l4;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " = " << x << endl

typedef unsigned long long ull;

const int maxn = 1e5;
vector<int> g[maxn];
map<string, int> ma;
string res[maxn];
int in[maxn];
inline int id(const string &str)
{
    if (ma.count(str) == 0)
    {
        int ret = ma.size();
        ma[str] = ret;
        g[ret].clear();
        in[ret] = 0;
        res[ret] = str;
    }
    return ma[str];
}
inline int get()
{
    string str;
    cin >> str;
    return id(str);
}
void dfs(int cur)
{
    if (g[cur].empty())
        return;
    int nxt = g[cur].back();
    g[cur].pop_back();
    dfs(nxt);
    cout << " " << res[nxt] << "-" << res[cur];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    for (int kase = 1; kase <= T; ++kase)
    {
        ma.clear();
        int m;
        cin >> m;
        for (int i = 0; i < m; ++i)
        {
            int a = get(), b = get();
            //            g[a].pb(b);
            //            ++in[b];
            g[b].pb(a);
            ++in[a];
        }
        cout << "Case #" << kase << ":";
        int start = 0;
        for (int i = 0; i < ma.size(); ++i)
            if (g[i].size() > in[i])
            {
                start = i;
                break;
            }
        dfs(start);
        cout << '\n';
    }
}
