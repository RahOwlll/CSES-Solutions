
#include <bits/stdc++.h>
using namespace std;
#define ref(i,n) for(int i = 0;i<n;i++)
#define bef(i,n) for (int i =n;i>=0;i--)
#define ll long long
 
int gcd(int a,int b){
	if(b == 0)
		return a;
	if(a == 1)
		return 1;
	else return gcd(b,a%b);
}
 
int main(){
 
	#ifndef ONLINE_JUDGE
		freopen("input1.txt","r",stdin);
		freopen("output1.txt","w",stdout);
	#endif
 
		ll n;
		cin>>n;
		ll a[n],ans=0,maxx;
		ref(i,n) cin>>a[i];
		maxx=a[0];
		for(int i=1;i<n;i++){
			maxx = max(maxx,a[i]);
			if(a[i]<a[i-1]){
			 ans += abs(a[i]-a[i-1]);
			 a[i] = a[i]+abs(a[i]-a[i-1]);
			 if(a[i]<maxx) ans += abs(a[i]-maxx);
			}	
		}
		cout<<ans<<endl;
	return 0;
}