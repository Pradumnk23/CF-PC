#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
using namespace std;

#define mp                  make_pair
#define pb                  push_back
#define lli                 long long int
#define sl                  set<lli>
#define pl                  pair<lli,lli>
#define pi                  pair<int,int>
#define vl                  vector<lli>
#define fastio              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define bits(x)             __builtin_popcountll(x)
#define ld                  long double
#define all(x)              x.begin(),x.end()
#define fn                  for(lli i=0;i<n;i++)
#define rep(i,a,b)          for(lli i=a;i<b;i++)
#define repo(i,a,b)         for(lli i=a;i>=b;i--)
#define test()              lli test; cin>>test; while(test--)
#define fi                  first
#define se                  second
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define sp(x)               fixed << setprecision(x)

int gcd(int A, int B)
{
    if (B == 0)
        return A;
    else
        return gcd(B, A % B);
}
int main()
{
    lli n;
    cin>>n;
    lli a[n];
    fn cin>>a[i];
    sort(a,a+n);
    lli maxm=0,cnt1=1,cnt2=1;
    /*for(lli i=0; i<n-1; i++)
    {
        for(lli j=i+1; j<n; j++)
        {
            if(abs(a[i]-a[j])>maxm)
                maxm=abs(a[i]-a[j]);
        }
    }*/
    maxm=a[n-1]-a[0];
    cout<<maxm<<" ";
    for(lli i=1; i<n-1; i++)
    {
        if(a[0]==a[i])
            cnt1++;
        else if(a[i]==a[n-1])
            cnt2++;
    }
    if(a[0]==a[n-1])
        cout<<n*(n-1)/2;
    else
        cout<<cnt1*cnt2<<endl;
	return 0;
}
