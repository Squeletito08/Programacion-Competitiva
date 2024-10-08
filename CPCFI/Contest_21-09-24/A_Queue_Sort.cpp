#include <bits/stdc++.h>
using namespace std; 

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll; 
typedef vector<int> vi; 
typedef vector<ll> vll; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
void read_vi(vi &a, int n){for(int i=0; i<n; i++) cin >> a[i];}
void read_vll(vll &a, int n){for(int i=0; i<n; i++) cin >> a[i];}


void solve(){
    int n; 
    cin >> n; 

    vi nums(n); 
    read_vi(nums, n); 
    int min=0, p=-1;

    for(int i = n-2; i >= 0; i--) {
        if(nums[i] > nums[i+1]) {
            p=i;
            break;
        }
    }

    for(int i = 1; i < n; i++) {
        if(nums[i] < nums[min]) {
            min = i;
        }
    }

    if(min > p) {
        cout << p+1 << endl;
    }
    else {
        cout << -1 << endl;

    }


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); 

    int t = 1; 
    cin >> t; 

    while(t--){
        solve(); 
    }

    return 0; 
}