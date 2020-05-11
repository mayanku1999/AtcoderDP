#include<bits/stdc++.h>
using namespace std;


//For ordered_set
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;


// #include <boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;


#define ll long long
#define ld long double
#define ui unsigned int
#define ull unsigned ll
#define d double
#define endl "\n"
#define debug(x) cout<< (#x)<< " is "<< x<<endl

// #pragma GCC optimize("O3", "unroll-loops")
// mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());



#define graph          vector<vector<int>>
#define V              vector
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vector<int>,greater<int> >
typedef pair<int, int> pii;
typedef pair<ll, ll>   pll;
typedef V<int>         vi;
typedef V<ll>          vll;
typedef V<string>      vs;
typedef V<double>      vd;
typedef V<pii>         vpii;             
typedef V<pll>         vpll;             
typedef pair<int,pii>  piii;             
typedef priority_queue<pii, vector<pii>, greater<pii> > pqq;

//pbds
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// pbds s;
// s.insert(5);
// s.insert(1);
// s.insert(2);
// s.insert(3);
// s.insert(4);
// s.erase(4);
// cout<<s.order_of_key(3);   // this return the index position of value 3 in sorted order i.e. 1 2 3 4 5             Output: 2
// suppose element nahi milta set me , to jha vo element hona chiye tha, agr vo present hota to vo vala index return hota
// e.g. we have set <1 ,2 ,3 ,5>
// if we wanna search(order_of_key(4)) 4 in this,  then we will get 4 as output

// cout<<*(s.find_by_order(3));  // this return the position of element 3 in original set (without sorting)           Output: 4


/*********************************************************************************88**************************************************/

#define mp                   make_pair
#define eb                   emplace_back
#define pb                   push_back
#define pf                   push_front
#define popb                 pop_back
#define popf                 pop_front
#define hashmap              unordered_map
#define hashset              unordered_set
#define lb                   lower_bound
#define ub                   upper_bound
#define ff                   first
#define ss                   second


/***********************************************************************************************************************************/
// function in short
#define all(a)               (a).begin(), (a).end()
#define rall(a)              (a).rbegin(), (a).rend()
#define lbpos(v,x)           (int)(lower_bound(all(v),x)-v.begin())//=v.size()==>No LB 
#define ubpos(v,x)           (int)(upper_bound(all(v),x)-v.begin())//=v.size()==>No UB

#define setbits(x)           __builtin_popcountll(x)
//  5==> 101 ,,  setbits(5)=2 as two bits are sets

#define zerobits(x)           __builtin_ctzll(x)
//  it return the number of 0 after first 1 from right  e.g 48==>110000  ,, zerobits(48) return 4  

#define fixed(x,n) fixed << setprecision(n)<<x
#define fast(); ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define init(arr,val) memset(arr,val,sizeof(arr))
#define dynamic(arr,n,type) type *arr=new type[n];

/*******************************************************************************************************************************************/

#define test int t; cin>>t; while(t--)
#define test1 int t=1; while(t--)
#define foi(n) for(ll i=0;i<n;i++)
#define foj(n) for(ll j=0;j<n;j++)
#define fok(n) for(ll k=0;k<n;k++)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loope(i,a,b) for(int i=a;i<=b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
/***************************************************************************************************************************************/

// constants
#define Ns   1000007
#define MOD  1000000007
#define maxn 100000000000017
#define inf  1e18

/*****************************************************************************************************************************************/



//For Calculating nCr
template<typename T>
T nCr(T n, T r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    int  ans = 1,i;
    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    } return ans;
}

//power optimized
// template<typename T,typename T2>
ll power(ll x, ll y) 
{ 
    if (y == 0)  return 1; 
    ll res=power(x,y/2);
    if (y % 2)  return res*res*x;
    return res*res; 
}


ll modularExponentiation(ll x,ll n,ll M){
    if(n==0)
        return 1;
    else if(n%2 == 0)
        return modularExponentiation((x*x)%M,n/2,M);
    return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;
}
    
ll binaryExponentiation(ll x,ll n){
    if(n==0)
        return 1;
    else if(n%2 == 0)        
        return binaryExponentiation(x*x,n/2);
    else                            
        return x*binaryExponentiation(x*x,(n-1)/2);
}
    
ll GCD(ll A, ll B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
    
ll extended_GCD(ll a , ll b , ll &x , ll &y){
    if(a == 0){
        x = 0;
        y = 1;
        return b;
    }
    ll x1 , y1;
    ll gcd = extended_GCD(b%a , a , x1 , y1);
    x = y1 - (b/a)*x1; 
    y = x1;
    return gcd; 
}
    
ll modinv(ll a , ll mod){
    ll x , y;
    extended_GCD(a , mod , x , y);
    if(x < 0) x += mod;
    return x;
}
    
//For M=prime no
ll modPrimeInverse(ll A,ll M){
    return modularExponentiation(A,M-2,M);
}
 
void sieve(ll N){
    bool isPrime[N+!1];
 
    for(ll i = 0; i <= N;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(ll i = 2; i * i <= N; ++i) {
            if(isPrime[i] == true) {   
                for(ll j = i * i; j <= N ;j += i)
                    isPrime[j] = false;
        }
    }
 
    // for(ll i =2;i<=N;i++) {
    //     if(isPrime[i] == true) {
    //         countPrime++;
    //         prime.push_back(i);
    //     }
    //         np[i] = countPrime;
    // }
}
 
 
ll minPrime[Ns];
void factorSieve(ll n){
    memset(minPrime,0,sizeof(minPrime));
    for (ll i = 2; i * i <= n; ++i) {
        if (minPrime[i] == 0) {
            for (ll j = i * i; j <= n; j += i) {
                if (minPrime[j] == 0) {
                    minPrime[j] = i;
                }
            }
        }
    }
    for (ll i = 2; i <= n; ++i) {
        if (minPrime[i] == 0) {
            minPrime[i] = i;
        }
    }
}
 
ll factorize(ll n) {
 
    map<ll,ll> m;
    m.clear();
    while (n != 1) {
        m[minPrime[n]]++;
        n /= minPrime[n];
    }
 
    for(auto i:m) {
        if(i.second>1) {
            return 0;
        }
    }
 
    return 1;
}
    
void merge(ll A[ ] , ll start, ll mid, ll end) {
    ll p = start ,q = mid+1;
    
    ll Arr[end-start+1] , k=0;
    
    for(ll i = start ;i <= end ;i++) {
        if(p > mid)     
        Arr[ k++ ] = A[ q++] ;
    
    else if ( q > end) 
        Arr[ k++ ] = A[ p++ ];
    
    else if( A[ p ] < A[ q ])
        Arr[ k++ ] = A[ p++ ];
    
    else
        Arr[ k++ ] = A[ q++];
    }
    for (ll p=0 ; p< k ;p ++) {
        A[ start++ ] = Arr[ p ] ;                          
    }
}
    
void merge_sort (ll A[ ] , ll start , ll end ){
    if( start < end )
    {
        ll mid = (start + end ) / 2 ;          
        merge_sort (A, start , mid ) ;
        merge_sort (A,mid+1 , end ) ;         
    
        merge(A,start , mid , end );   
    }                    
}
    
ll binarySearch(ll a[],ll low,ll high,ll key){
    while(low<=high)
    {
        ll mid=(low+high)/2;
        if(a[mid]<key)
        {
            low=mid+1;
        }
        else if(a[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
    
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b) { 
    if(a.first == b.first)
    {
        a.second > b.second;
    }
    return (a.first < b.first); 
}
 vll arr(100005),dp(100005,-1);
ll fun(ll id,ll n,ll k){
if(id>n)return 0;
if(dp[id]!=-1)return dp[id];
ll op1=0,op2=LLONG_MAX;
for(ll i=1;i<=k && i<=n;i++)
{op1=fun(id+i,n,k) + abs(arr[id] - arr[min(id+i,n)]);
// cout<<op1<<" ";
op2=min(op2,op1);
}
// op2=fun(id+2,n) + abs(arr[id] - arr[min(id+2,n)]);
dp[id]  =  op2;
return dp[id];
}
void solve(){
 ll n,k;
 cin>>n>>k;
// vll arr(n+1,0);
for(int i=1;i<=n;i++)cin>>arr[i];
//  vll dp(n+1,-1);
//  dp[1]=0;
//  dp[2]=abs(arr[1]-arr[2]);
//  for(int i=3;i<=n;i++){
// dp[i]=min(dp[i-1] + abs(arr[i]-arr[i-1]), dp[i-2] + abs(arr[i]-arr[i-2]));
//  }
 cout<<fun(1,n,k)<<endl;
// cout<<dp[n];
}
int main() {
    fast();

//      #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif

    test1{
        solve();
        

    }
    return 0;
}

