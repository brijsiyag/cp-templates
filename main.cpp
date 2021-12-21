////// Author : brijsiyag //////
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define cendl cout<<endl
#define vl vector<ll>
#define vll vector<ll,ll>
#define vvl vector<vl>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define umll unordered_map<ll,ll>
#define sll set<ll>
#define sz(x) x.size()
#define repl(i,initial,n) for(int i = initial;i<n;i++)
#define replr(i,initial,n) for(int i = initial;i>=n;i--)
#define repla(i, a) for (auto i : a)
#define repli(i,a) for(auto i = a.begin();i != a.end();i++)
#define asort(a) sort(a.begin(), a.end())
#define dsort(a) sort(a.begin(), a.end(), greater<int>())
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
#define lmax LONG_MAX
#define lmin LONG_MIN
#define all(v) v.begin(), v.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define max3(a, b, c) max(c, max(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define mod 1000000007
bool debugg = false;
#define inputArr(arr,initial,n) for(int i = initial;i<n;i++) cin>>arr[i];
#define inputMat(arr,n,m) arr.resize(n);repl(i,0,n){arr[i].assign(m,0);repl(j,0,m){cin>>vec[i][j];}}
#define debArr(arr) if(debugg){cout<<#arr<<" : ";repla(itr,arr) cout<<itr<<" ";cendl;}
#define debMat(mat) if(debugg){cout<<#mat<<endl;repla(row,mat){{repla(col,row) cout<<col<<" ";}cendl;}}
#define debMap(mp) if(debugg){cout<<#mp<<endl;repla(itr,mp) cout<<"{"<<itr.first<<", "<<itr.second<<"}\n";cendl;}
#define deb(var) if(debugg){cout<<#var<<" = "<<var<<endl;}
#define deb2(var1,var2) if(debugg){cout<<#var1<<" = "<<var1<<" "<<#var2<<" = "<<var2<<endl;}
#define deb3(var1,var2,var3) if(debugg){cout<<#var1<<" = "<<var1<<" "<<#var2<<" = "<<var2<<" "<<#var3<<" = "<<var3<<endl;}

ll tin;


void solve(){
	$0
}
int main()
{
	#ifndef ONLINE_JUDGE 
	debugg = true;
	// debugg = false;
	freopen("/Users/birju/Desktop/Cp/input.txt", "r", stdin);
    freopen("/Users/birju/Desktop/Cp/output.txt", "w", stdout);
	#endif
    fast;
    ll T = 1;
    cin>>T;
    while(T--){
    	solve();
    }
    return 0;
}