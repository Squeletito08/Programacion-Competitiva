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

    vector<ii> mov(n); 

    for(int i = 0; i < n; i++){
        cin >> mov[i].se;
        cin >> mov[i].fi;  
    }

    sort(all(mov)); 

    int start = mov[0].fi; 
    int cont = 1; 

    for(int i = 1; i < n; i++){
        if(mov[i].se >= start){
            cont++; 
            start = mov[i].fi; 
        }
    }

    cout << cont << "\n"; 

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); 

    int t = 1; 

    while(t--){
        solve(); 
    }

    return 0; 
}