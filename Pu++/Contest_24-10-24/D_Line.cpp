#include <bits/stdc++.h>
using namespace std; 

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define sz(a) int(a.size())
#define endl "\n"
typedef long long ll; 
typedef vector<int> vi; 
typedef vector<ll> vll; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
void read_vi(vi &a, int n){for(int i=0; i<n; i++) cin >> a[i];}
void read_vll(vll &a, int n){for(int i=0; i<n; i++) cin >> a[i];}
const ll MOD = 1e9+7;


void solve(){
    ll n; cin >> n; 

    string s; cin >> s; 

    ll sum = 0; 

    for(int i = 0; i < sz(s); i++){
        if(s[i] == 'L'){
            sum += i; 
        }
        else{
            sum += n - i - 1; 
        }
    } 

    int i = 0; 
    int j = n-1; 

    int ctd = 0; 

    while(i <= j){

        if(s[i] == 'L'){
            sum = sum - i; 
            sum += n - i - 1; 
            cout << sum << " "; 
            ctd++; 
           
        }

        i++;

        if(s[j] == 'R'){
            sum = sum - (n-j-1); 
            sum += j; 
            cout << sum << " "; 
            ctd++; 
        }
        j--; 
    }


    ctd = n - ctd; 
    while(ctd--){
        cout << sum << " "; 
    }

    cout << endl; 
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