#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  100006
#define  Max(a,b,c) max(a,max(b,c))
#define  Min(a,b,c) min(a,min(b,c))
#define  mem(a,v)   memset(a,v,sizeof(a))
#define  rep        for (int i=0;i<n;i++)
#define  Rep        for (int i=0;i<m;i++)

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];

ll rev (ll a,ll b){

    return a>b;
}

int main ()
{

    fastIO();
    vector<ll> V;
    set<ll>S;
    set<ll>::iterator it;
    map<ll,ll> M;
    map<ll,ll>::iterator it1;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x=0,y,z;
    string s,s1[MAX],s2[MAX],s3,s4;

    cin>>n;

    for (int i=0;i<n;i++){
        cin>>a>>b;
        M.insert(mp(a,b));
    }

    for (it1=M.begin();it1 != M.end();it1++){
        if (x>it1->second){
            check=1;
            break;
        }
        x=it1->second;
    }
    if (check)cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;
    return 0;
}
