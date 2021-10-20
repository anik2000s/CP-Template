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


// SIEVE //

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


// SEGMENT TREE //

// vector<ll> a;
// vector<ll> tree;

// void build(ll n, ll start, ll end){
//     if(start==end){
//         tree[n]=a[start];
//         return;
//     }
//     ll mid=start+((end-start)/2);
//     build(2*n,start,mid);
//     build(2*n+1,mid+1,end);
//     tree[n]=tree[2*n]+tree[2*n+1];
// }

// ll query(ll n,ll start, ll end, ll l,ll r){
//     if(start>r || end<l){
//         return 0;
//     }
//     if(l<=start && end<=r){
//         return tree[n];
//     }
//     ll mid=start+((end-start)/2);
//     ll left=query(2*n,start,mid,l,r);
//     ll right=query(2*n+1,mid+1,end,l,r);
//     return left+right;
// }

// void modify_tree(ll n, ll start, ll end, ll u, ll v){
//     if(start==end){
//         tree[n]=v;
//         return;
//     }
//     ll mid=start+((end-start)/2);
//     if(u<=mid){
//         modify_tree(2*n,start,mid,u,v);
//     }else{
//         modify_tree(2*n+1,mid+1,end,u,v);
//     }
//     tree[n]=tree[2*n]+tree[2*n+1];
// }


// GRID //

// vector<int> d4x {0,1,0,-1};
// vector<int> d4y {-1,0,1,0};
// vector<int> d8x {0,1,1,1,0,-1,-1,-1};
// vector<int> d8y {-1,-1,0,1,1,1,0,-1};


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
