#include <bits/stdc++.h>
using namespace std ;

#define     pb               push_back
#define     popb             pop_back
#define     ll               long long int
#define     ull              unsigned long long int
#define     fst                first
#define     sec                second
#define     mem(a,v)         memset(a,v,sizeof(a))
#define     mp               make_pair
#define     ps                push
#define     fnt              front
#define     pf               push_front
#define     vec1             vector < long int >
#define     vt               vector <long int >:: iterator
#define     list1            list < long int >
#define     lt               list <long int >:: iterator
#define     map1             map <long int,long int>
#define     mt               map <long int >:: iterator
#define     set1             set <long int >
#define     st               set <long int>::iterator
#define     que              queue <long int>
#define     qt               queue <long int>::iterator
#define     stk              stack <long int>
#define     sit              stack <long int>::iterator
#define     MAX              100006
#define     pii              pair <int,int>
void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

int main ()
{

    ///freopen("output.txt","w",stdout);

    fastIO ();

    string s;
    string s1;

    cin>>s;

    int len=s.length();
    int check=1;
    if (s[0]>=97&&s[0]<=122){
        ///s[0]=s[0]-32;
        s1+=(s[0]-32);
    }
    else {

        s1+=(s[0]+32);
    }
    for (int i=1;i<len;i++){
        if (s[i]>90){
            check=0;
            break;
        }
        ///s[i]=s[i]-32;
        s1+=(s[i]+32);
    }
    if (check==1)
        cout<<s1<<endl;
    else
        cout<<s<<endl;
    return 0;
}


