#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
int main(){
	int a[10000001], i=0, num;
	while(cin>>num){
		a[i++]=num;
	}
	for(int j=0; j<i; j++){
	    if(a[j]!=42)
	    cout<<a[j]<<endl;
	    else
	    break;
	}
	
	return 0;
}
