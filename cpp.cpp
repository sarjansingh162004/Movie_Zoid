#include<bits/stdc++.h>
# define ll long long
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return (gcd(b,a%b));
}
int32_t main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        double a,b;
        cin>>a;
        b=a/2;
        cout<<ceil(b)<<"\n";
    }
}

