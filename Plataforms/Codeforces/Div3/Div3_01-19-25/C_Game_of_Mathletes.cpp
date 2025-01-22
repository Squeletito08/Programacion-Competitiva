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
    cin >>
        a[i];
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
  int n, k;
  cin >> n >> k;

  vi nums(n);
  map<int, int> ctd_n;
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
    ctd_n[nums[i]]++;
  }

  int no_impor = 0;
  int max_parejas = 0;
  int maximo = -INT_MAX;

  set<int> vistos;

  for (const auto &[key, value] : ctd_n)
  {

    int c = k - key;

    if (vistos.count(c))
    {
      continue;
    }

    if (key == c)
    {
      max_parejas += value / 2;
      maximo = max(maximo, value / 2);
      no_impor += value % 2;
      vistos.insert(key);
      continue;
    }

    int otros = ctd_n[c];

    int parejas = min(value, otros);
    max_parejas += parejas;
    maximo = max(maximo, parejas);

    no_impor += max(value, otros) - parejas;
    vistos.insert(key);
  }

  if (no_impor % 2 != 0)
  {
    cout << maximo - 1 << endl;
    return;
  }

  cout << max_parejas << endl;
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