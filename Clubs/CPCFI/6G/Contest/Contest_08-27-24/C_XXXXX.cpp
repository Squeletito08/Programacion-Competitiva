#include <bits/stdc++.h>
using namespace std;

#define owo                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sz(a) int(a.size())
#define endl "\n"
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
void read_vi(vi &a, int n)
{
  for (int i = 0; i < n; i++)
    cin >> a[i];
}
void read_vll(vll &a, int n)
{
  for (int i = 0; i < n; i++)
    cin >> a[i];
}
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
  int n, x;
  cin >> n >> x;

  int ctd0 = 0;
  int min_l = n;
  vi nums(n);

  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
    nums[i] = nums[i] % x;
    if (nums[i] == 0)
      ctd0++;
    else
      min_l = min(i, min_l);
  }

  if (ctd0 == n)
  {
    cout << -1 << endl;
    return;
  }

  int sum = 0;
  int res = -1;

  for (int i = 0; i < n; i++)
  {
    sum = (sum + nums[i]) % x;

    if (sum % x != 0)
    {
      res = max(res, i + 1);
      continue;
    }

    res = max(res, i - min_l);
  }

  cout << res << endl;
}

int main()
{
  owo

      int tt = 1;
  cin >> tt;

  while (tt--)
  {
    solve();
  }

  return 0;
}