#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
int main(){
	ll n, i=2;
	cin>>n;
	while(n){
	    int f=0;
	    for(int j=2; j<=sqrt(i); j++){
	        if(i%j==0){
	            f=1;
	        break;
	        }
	    }
	    if(f==0){
	        cout<<i<<endl;
	        n--;
	    }
	    i++;
	}
	return 0;
}
