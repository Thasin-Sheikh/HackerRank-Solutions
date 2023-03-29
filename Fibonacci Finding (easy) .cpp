///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define MOD 1000000007
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[3];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
ll ar[3],T[3][3],I[3][3];
void mul(ll A[3][3],ll B[3][3],ll dim)
{
    ll res[dim+1][dim+1];
    ll i,j,k;
    for(i=1; i<=dim; i++)
    {
        for(j=1; j<=dim; j++)
        {
            res[i][j]=0;
            for(k=1; k<=dim; k++)
            {
                ll ku;
                ku=(A[i][k]*B[k][j])%MOD;
                res[i][j]=(res[i][j]+ku)%MOD;
            }
        }
    }
    for(i=1; i<=dim; i++)
    {
        for(j=1; j<=dim; j++)
        {
            A[i][j]=res[i][j];

        }
    }
}
ll getfib(ll n)
{
    if(n<=2)
        return ar[n];
    I[1][1]=1,I[2][2]=1;
    I[1][2]=I[2][1]=0;
    T[1][1]=0;
    T[1][2]=T[2][2]=T[2][1]=1;
    n-=1;
    while(n)
    {
        if(n%2!=0)
        {
            mul(I,T,2);
            n--;
        }
        else
        {
            mul(T,T,2);
            n/=2;
        }

    }
    ll fn=((ar[1]*I[1][1])+(ar[2]*I[2][1]))%MOD;
    return fn;

}
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>t;
    while(t--)
    {
        cin>>ar[1]>>ar[2]>>n;
        n++;
        cout<<getfib(n)<<endl;
    }

    return 0;
}

