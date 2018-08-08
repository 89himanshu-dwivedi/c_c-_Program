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

const int maxn = 5e3+1;
int n, p, s[maxn];
int main()
{
  int T;
  scanf("%d", &T);
  for (int kase = 1; kase <= T; ++kase)
    {
      scanf("%d", &n);
      memset(s, 0, sizeof(s));
      for (int i = 0; i < n; ++i)
	{
	  int a, b;
	  scanf("%d %d", &a, &b);
	  s[a] += 1, s[b+1] -= 1;
	}
      for (int i = 1; i < maxn; ++i)
	s[i] += s[i-1];
      scanf("%d", &p);
      printf("Case #%d:", kase);
      for (int i = 0; i < p; ++i)
	{
	  int x;
	  scanf("%d", &x);
	  printf(" %d", s[x]);
	}
      puts("");
    }
}
