
// Problem: D. Xenia and Bit Operations
// Contest: Codeforces - Codeforces Round #197 (Div. 2)
// URL: https://codeforces.com/problemset/problem/339/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#pragma GCC diagnostic ignored "-Wsign-compare"
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
void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

template<class T> using oset=tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key returns the 0 based position of a value
// find_by_order returns a pointer pointing at the kth element 
// also 0 indexed
ll A[MAX], B[MAX], C[MAX];
vector<int> V[MAX];

int main ()
{
    fastIO();
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y, z;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    cin >> n >> q;
    m = n; n = 1 << n; 
    for(int i = 0; i < n; i++){
        cin >> A[i]; V[0].pb(A[i]);
    } k = n;
    for(int i = 1; i <= m; i++){
        for(int j = 0; j < k; j += 2){
            if(i % 2){
                V[i].pb(V[i - 1][j] | V[i - 1][j + 1]);
            }
            else {
                 V[i].pb(V[i - 1][j] ^ V[i - 1][j + 1]);
            }
        }
        k >>= 1;
    }
    while(q --){
        cin >> l >> c;
        l--; V[0][l] = c;
        for(int i = 1; i <= m; i++){
            if(l % 2){
                x = V[i - 1][l];
                y = V[i - 1][l - 1];
                z = l / 2;
            }
            else {
                x = V[i - 1][l];
                y = V[i - 1][l + 1];
                z = l / 2;
            }
            l /= 2;
            V[i][z] = (i % 2) == 1? x | y: x ^ y;
        }
        cout << V[m][0] << endl;
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
