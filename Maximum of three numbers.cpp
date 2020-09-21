#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n1, n2, n3;
	    cin>>n1>>n2>>n3;
	    
	    cout<<max(n1, max(n2, n3))<<endl;
	}
	
	return 0;
}
