/*Siming's C++14/17/20 Template For CP*/
#include <bits/stdc++.h>
using namespace std;
/*Debug*/
/*vector*/ template<typename T> ostream &operator<<(ostream &os, const vector<T> &v){os<<"VEC[";for(int i=0;i<v.size();++i){os<<v[i];if(i!=v.size()-1)os<<", ";}os<<"]";return os;}
/*list*/ template<typename T> ostream &operator<<(ostream &os, const list<T> &l){os<<"LIST[";for(auto &it:l){os<<it;if(it!=*l.rbegin())os<<", ";}os<<"]";return os;}
/*set*/ template<typename T> ostream &operator<<(ostream &os, const set<T> &s){os<<"SET{";for(auto &it:s){os<<it;if(it!=*s.rbegin())os<<", ";}os<<"}";return os;}
/*pair*/ template<typename T, typename S> ostream &operator<<(ostream &os, const pair<T, S> &p){os<<"("<<p.first<<":"<<p.second<<")";return os;}
/*map*/ template<typename T, typename S> ostream &operator<<(ostream &os, const map<T, S> &m){os<<"MAP{";for(auto &it:m){os<<it;if(it!=*m.rbegin())os<<", ";}os<<"}";return os;}
/*umap*/ template<typename T, typename S> ostream &operator<<(ostream &os, const unordered_map<T, S> &m){os<<"UMAP{";bool first=true;for(auto &it:m){if(!first)os<<", ";first=false;os<<it;}os<<"}";return os;}
#define dbg(...) [](const auto&... args) { string _s = #__VA_ARGS__; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); ((cout << "DBG: " << (_it++)->c_str() << " = " << args << "\n"), ...); }(__VA_ARGS__)
/*IO*/
/*vector*/ template<typename T> istream &operator>>(istream &is, vector<T> &v){for(auto &i:v){is>>i;}return is;}
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define setd(n) cout.precision(n);cout<<fixed;
#define endl "\n"
/*Acronyms*/
#define int long long
#define str string
#define vec vector
#define umap unordered_map
#define PB push_back
#define MP make_pair
#define ff first
#define ss second
/*Util*/
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,l,h) for(int i=(l);i<=(h);++i)
#define FORD(i,h,l) for(int i=(h);i>=(l);--i)
#define EACH(i,x) for(auto &i:x)
#define SIZE(x) ((int)(x).size())
#define ALL(x) begin(x), end(x)
#define ALLD(x) rbegin(x), rend(x)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)/__gcd(a,b)*(b))
#define cdiv(a,b) ((a==0)?0:((a)-1)/(b)+1)
/*Testing*/
#define test solve();
#define tests int t;cin>>t;for(;t!=0;--t){solve();cout<<"\n";}

/*Code Begins Here*/

void solve()
{

}

signed main()
{
    fastio
    test
    return 0;
}