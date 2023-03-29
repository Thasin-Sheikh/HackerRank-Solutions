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
ll a[200],b[200];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1])
            {
                k=magic[i-1][j-1];
                magic[i][j]=k+1;
            }
            else
            {
                l=magic[i-1][j];
                r=magic[i][j-1];
                magic[i][j]=max(l,r);
            }
        }
    }
    ll x,y;
    x=n,y=m;
    while(1)
    {
        k=magic[x-1][y-1];
        l=magic[x-1][y];
        r=magic[x][y-1];
        l=max(l,r);
        if(magic[x][y]==k+1&&l!=k+1)
        {
            v.push_back(a[x-1]);
            x--;
            y--;
        }
        else
        {
            if(magic[x][y-1]==l)
            {
                y--;
            }
            else x--;
        }
        if(magic[x][y]==0)
        {
            break;
        }
    }
    reverse(v.begin(),v.end());
    for(auto it:v)
    {
        cout<<it<<" ";
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
