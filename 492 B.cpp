#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  1000006

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

int a[MAX];
int b[MAX];
int c[MAX];
vector <int> vec;

int main ()
{

    ///freopen("output.txt","w",stdout);

    fastIO();
    int n;
    int m;
    int cnt=0;
    int p,q,r;
    int cntr=0;
    int v=0;
    int check=0;
    int x,y,z;
    double ans;
    string s,s1,s2;

    cin>>n>>m;

    for (int i=0;i<n;i++){
        cin>>p;
        vec.pb(p);
    }

    sort(vec.begin(),vec.end());


    for (int i=0;i<vec.size()-1;i++){
        q=vec[i+1]-vec[i];
        if (q>cnt){
            cnt=q;
        }
    }

    r=vec[0]-0;
    y=m-vec[n-1];
    z=max(r,y);
    z=z*2;
    ans=max(z,cnt);

    printf("%lf\n",ans/2);

    return 0;
}



