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

const int maxl = 60;

bool solve(ll cur, ll k)
{
    assert(cur);
    ll len = (1ll<<(cur-1))-1;
    if (k <= len)
        return solve(cur-1, k);
    else if (k == len+1)
        return 0;
    else
    {
        k -= len+1;
        return !solve(cur-1, len+1-k);
    }
}
int main()
{
    int T;
    scanf("%d", &T);
    for (int kase = 1; kase <= T; ++kase)
    {
        ll n;
        scanf("%lld", &n);
        printf("Case #%d: %d\n", kase, (int) solve(maxl, n));
    }
}


