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
    string s, t; 
    cin >> s >> t;  

    int i = 0; 
    int j = 0; 

    while(i < s.size() && j < t.size()){

        if(s[i] == t[j]){
            j++; 
            i++; 
            continue; 
        }
        if(s[i] == '?'){
            s[i] = t[j]; 
            j++; 
        }

        i++; 
    }

    if(j == t.size()){

        while(i < s.size()){
            if(s[i] == '?')
                s[i] = 'a'; 
            i++; 
        }

        cout << "YES" << "\n"; 
        cout << s << "\n"; 
    }
    else{
        cout << "NO\n"; 
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