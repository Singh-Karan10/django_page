#include<bits/stdc++.h>
using namespace std;
#define fix(n) cout << fixed << setprecision(n)
#define mset(a,n) memset(a,n,sizeof a)
#define rep(i,a,b) for (__typeof((b)) i=(a);i<(b);i++)
#define repp(i,a,b,p) for(__typeof((b)) i=(a);i<(b);i+=p)
#define ren(i,a,b) for(__typeof((a)) i=(a);i>=(b);i--)
#define renn(i,a,b,p) for(__typeof((a) i=(a);i>=(b);i-=p)
#define ADD(a,b,c) ((a)%c+(b)%c)%c
#define SUB(a,b,c) ((a)%c-(b)%c+c)%c
#define MUL(a,b,c) (((a)%c)*((b)%c))%c
#define lbd lower_bound
#define ubd upper_bound
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define all(v) (v).begin(), (v).end()
#define sz(x) (ll)x.size()
#define pii pair<int,int>
#define PI  3.14159265358979323
#define MOD 1000000007
#define trav(a,x) for(auto& a : x)

ll gcd(ll a,ll b){
 	if(a==0)
 		return b;
 	return gcd(b%a,a);
 }
ll powmod(ll a,ll b,ll p){
	if(b==0)
		return 1;
	if(b==1)
			return a;
	ll temp=powmod(a,b/2,p);
	temp*=temp;
	temp%=p;
	if(b%2==0)
		return temp;
	temp=temp*a;
	temp%=p;
	return temp;
}
void solve()
{
   
   
   return ;
  
}


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
 }
