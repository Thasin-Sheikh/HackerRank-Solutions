///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int ;
using dl =double;
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
vector<ll>v[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    ll w;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            magic[i][j]=INT_MAX;
        }
    }
    for(i=1;i<=m;i++)
    {
        cin>>l>>r>>w;
        magic[l][r]=w;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=n;k++)
            {
                magic[j][k]=min(magic[j][k],magic[j][i]+magic[i][k]);

            }
        }
    }
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        if(l==r)
        {
            cout<<0<<"\n";
        }
        else if(magic[l][r]==INT_MAX)
        {
            cout<<-1<<"\n";
        }
        else
        cout<<magic[l][r]<<"\n";
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}



