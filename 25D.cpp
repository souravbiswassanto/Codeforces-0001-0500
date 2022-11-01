
// Problem: D. Roads not only in Berland
// Contest: Codeforces - Codeforces Beta Round #25 (Div. 2 Only)
// URL: https://codeforces.com/contest/25/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#pragma GCC diagnostic ignored "-Wsign-compare"
//#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std ;

#define   Pi     2*acos(0.0)
#define   ll     long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl

template<class T> using oset=tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key returns the 0 based position of a value
// find_by_order returns a pointer pointing at the kth element 
// also 0 indexed
ll A[MAX], B[MAX], C[MAX];
vector<pair<int, int>> v;

struct DSU{
    //path compression
    int n;
    vector<int> parent, Size;
    DSU(int _n){
        n = _n;
        parent.resize(n + 3, 0);
        Size.resize(n + 3, 0);
    }
    int find_set(int v) {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }
    
    // Size compression
    void make_set(int v) {
        parent[v] = v;
        Size[v] = 1;
    }
    
    void union_set(int a, int b, int i) {
        a = find_set(a);
        b = find_set(b);
        if (a != b) {
            if (Size[a] < Size[b])
                swap(a, b);
            parent[b] = a;
            Size[a] += Size[b];
        }
        else{
            v.pb({i, a});
        }
    }
};

struct sourav{
    int a, b, c, d;
    sourav(int e, int f, int g, int h){
        a = e; b = f; c = g; d = h;
    }
};

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    cin >> n;
    DSU dsu(n); vector<sourav> ans;
    for(int i = 1; i <= n; i++){
        dsu.make_set(i);
    }
    for(int i = 1; i < n; i++){
        cin >> A[i] >> B[i];
        dsu.union_set(A[i], B[i], i);
    }
    for(int i = 0; i < v.size(); i++){
        a = v[i].first;
        b = v[i].second;
        for(int j = 1; j <= n; j++){
            c = dsu.find_set(b); d = dsu.find_set(j);
            //cout << c <<" "<< d << endl;
            if(c != d){
                ans.pb(sourav(A[a], B[a], c, d));
                dsu.union_set(c, d, i);
                break;
            }
        }
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i].a<<" "<< ans[i].b<<" "<<ans[i].c <<" "<<ans[i].d<<endl;
    }
    /* 
        precedence : ! * / % + - << >> 
        < > <= >= == != & ^ | && ||
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return (0 - 0 + 1 -  1 * 1);
}
