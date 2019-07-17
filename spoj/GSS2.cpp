#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define inp(i) cin >> i
#define oup(i) cout << i << "\n"

lli a[50005];
struct Tree
{
  lli pre, suf, sum, maxans;
} s[200020];

template <typename T>
T getmid(T &lo, T &hi)
{
  return (lo + hi) >> 1;
}

void buildtree(lli idx, lli lo, lli hi)
{
  if (lo > hi)
    return;
  if (lo == hi)
  {
    s[idx].pre = s[idx].suf = s[idx].sum =s[idx].maxans = a[lo];
    return;
  }
  lli mid = getmid(lo, hi);
  lli l = idx << 1;
  buildtree(l, lo, mid);
  buildtree(l + 1, mid + 1, hi);
  s[idx].pre = max(s[l].pre, s[l].sum + s[l + 1].pre);
  s[idx].suf = max(s[l + 1].suf, s[l + 1].sum + s[l].suf);
  s[idx].sum = s[l].sum + s[l + 1].sum;
  s[idx].maxans = max(s[l].suf + s[l + 1].pre, max(s[l].maxans, s[l + 1].maxans));
  return;
}

Tree querymax(lli idx, lli lo, lli hi, lli qs, lli qe)
{
  Tree q;
  if (qs > hi || qe < lo || lo > hi)
  {
    q.pre = q.suf = q.maxans = INT_MIN;
    q.sum = 0;
    return q;
  }
  if (lo >= qs && hi <= qe)
  {
    return s[idx];
  }
  lli mid = getmid(lo, hi);
  Tree l = querymax(idx << 1, lo, mid, qs, qe);
  Tree r = querymax(idx << 1 | 1, mid + 1, hi, qs, qe);
  q.pre = max(l.pre, l.sum + r.pre);
  q.suf = max(r.suf, r.sum + l.suf);
  q.sum = l.sum + r.sum;
  q.maxans = max(l.suf + r.pre, max(l.maxans, r.maxans));
  return q;

}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  inp(n);

  a[0] = 0;
  for (lli i = 1; i <= n; ++i)
    inp(a[i]);

  buildtree(1, 1, n);
  lli q, l, r;
  cin >> q;

  while (q--)
  {
    cin >> l >> r;

    Tree t = querymax(1, 1, n, l, r);
    oup(t.maxans);
  }
  return 0;
}