#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  300006
#define  mem(a,v)   memset(a,v,sizeof(a))

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];
vector<int>V;


int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;

    for (int i=1;i<=n;i++){
        cin>>A[i];
    }
    for (int i=1;i<=n;i++){
        if (A[i]<0){
            cntr++;
            if(cntr==3){
                cntr=1;
                V.pb(i-ans);
                ans=i;
            }
        }
    }

    V.pb(n-ans+1);
    cout<<V.size()<<endl;

    for(int i=0;i<V.size();i++){
        cout<<V[i]<< " ";
    }

    return 0;
}
