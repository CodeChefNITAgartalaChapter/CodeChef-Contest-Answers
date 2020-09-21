#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
//to store a 10^9 number
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll sum=1, n;
		cin>>n;
		for(int i=2; i<=(sqrt(n)); i++){
			if(n%i==0)
			sum+=i+(n/i);
		}
		if(sum==n && n!=1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
	
