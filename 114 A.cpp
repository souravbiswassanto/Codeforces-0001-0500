//#include <bits/stdc++.h>
//using namespace std ;
//
//#define  ll   long long
//#define  pb  push_back
//#define  mp  make_pair
//#define  MAX  1000006
//
//void fastIO (){
//
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.precision(20);
//}
//
//int a[MAX];
//int b[MAX];
//int c[MAX];
//
//int main ()
//{
//
//    ///freopen("output.txt","w",stdout);
//
//    fastIO();
//    long long int n;
//    long long int m;
//    int cnt=0;
//    int p,q,r;
//    int cntr=0;
//    int v=0;
//    int check=0;
//    int x,y,z;
//    string s,s1,s2;
//
//    cin>>n>>m;
//
//    if (m%n==0){
//        while (1){
//            m=m/n;cout<<m<<endl;
//            cnt++;
//            if (m==1){
//                check=1;
//                break;
//            }
//            if (m==0){
//                break;
//            }
//        }
//        if (check==1)
//            cout<<"YES"<<endl<<cnt-1<<endl;
//        else
//            cout<<"NO"<<endl;
//    }
//    else {
//        cout<<"NO"<<endl;
//    }
//
//
//    return 0;
//}
//
//
//
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long n,m,p;
    int c=0;

    cin>>n>>m;
    p=n;

    for (int i=1;;i++){
        if (p>=m)
            break;
        p=n*p;
        c++;

    }

    if (p==m){
        cout<<"YES"<<endl<<c<<endl;
    }
    else
        cout<<"NO"<<endl;
}
