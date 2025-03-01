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

    string s; 
    cin >> s; 

    int j1 = 0; 
    int j2 = 0; 

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            j1++; 
            if(j2 < 7){
                j2 = 0; 
            }
        }
        else{
            j2++; 
            if(j1 < 7){
                j1 = 0; 
            }
        }
    }

    if(j1 >= 7 || j2 >= 7){
        cout << "YES\n";
        return;
    }

    cout << "NO\n"; 
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