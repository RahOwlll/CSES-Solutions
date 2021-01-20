
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
 		
		int n;
		cin>>n;
		int odd[n],even[n],s_odd=0,s_even=0;
		if(n<=3 and n != 1) cout<<"NO SOLUTION\n";
		else if(n ==1) cout<<1<<endl;
		else if(n ==4) cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
		else{
			for(int i=1;i<=n;i+=2) cout<<i<<" ";
			for(int i=2;i<=n;i+=2) cout<<i<<" ";
				cout<<endl;
		}

		return 0;
}