
// Problem: A. Greg and Graph
// Contest: Codeforces - Practice Coding Contest - 01 by Sourav
// URL: https://codeforces.com/gym/366542/problem/A
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
#define   INF    1LL << 61
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
ll cost[504][503], mat[503][503];

int main ()
{
    fastIO();
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 1LL << 58;
    string s, s1, s2;

    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> cost[i][j];
            if(i == j)mat[i][j] = 0;
            else mat[i][j] = INF;
        }
    }
    for(int i = 1; i <= n; i++){
        cin >> A[i];
    } ans = 0;
    vector<ll> res;
    
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                if(B[j] == 0 or B[k] == 0)continue;
                mat[j][A[i]] = min(mat[j][A[i]], mat[j][k] + cost[k][A[i]]);
            }
        }
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                if(B[j] == 0 or B[k] == 0)continue;
                mat[A[i]][k] = min(mat[A[i]][k], mat[j][k] + cost[A[i]][j]);
            }
        }
        
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                if(B[j] == 0 or B[k] == 0)continue;
                mat[j][k] = min(mat[j][k], mat[j][A[i]] + mat[A[i]][k]);
            }
        }
        
        for(int j = 1; j <= n; j ++){
            for(int k = 1; k <= n; k++){
                //cout << mat[j][k]<<" ";
            }
            //cout << endl;
            for(int k = 1; k <= n; k++){
                if(mat[j][k] < Min)sum += mat[j][k];
            }
        }
        
        B[A[i]] = 1;
        res.pb(sum - ans);
        ans = sum;
        //cout << sum << endl;
        
    }
    reverse(res.begin(), res.end());
    for(auto it: res)cout << it <<" "; cout << endl;
    
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
