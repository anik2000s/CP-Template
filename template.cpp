#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define MOD 1000000007
#define MOD1 998244353
#define ff first
#define ss second
#define REP(i,a,n) for(ll i=a;i<n;i++)
#define REPR(i,n,a) for(ll i=n;i>a;i--)
#define mp make_pair
#define pll pair<ll,ll>
#define ppll pair<ll,pair<ll,ll>>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) (a*(b/gcd(a,b)))

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

ll lcm(ll a, ll b){
    return a*(b/gcd(a,b));
}

ll neg_mod(ll a, ll b){
    ll r=a%b;
    return r<0 ? r+b : r;
}

ll new_ceil(ll a, ll b){
    return (a+b-1)/b;
}

ll mod_pow(ll base, ll exp, ll mod){
    ll ans=1;
    while(exp){
        if(exp%2==0){
            base=(base*base)%mod;
            exp/=2;
        }else{
            ans=(ans*base)%mod;
            exp--;
        }
    }
    return ans%mod;
}

// const ll maxN=1000000;
// ll prime[maxN+1];

// void sieve(){
//     prime[0]=prime[1]=1;
//     for(ll i=2;i<=maxN;i++){
//         if(prime[i]==0){
//             for(ll j=i*i;j<=maxN;j+=i){
//                 prime[j]=1;
//             }
//         }
//     }
// }


void solve(){
    
}

int main(){
    fast_io;
    init_code();
    ll t=1;
    cin>>t;
    // ll a=t;
    while(t--){
        // cout<<"Case #"<<a-t<<": ";
        solve();
    }
    return 0;
}