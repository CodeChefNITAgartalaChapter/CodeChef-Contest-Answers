#include <iostream>
using namespace std;

void dectobin(int n)
{
    if(n==0)
    return;
    dectobin(n>>1);
    cout<<(n&1);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    dectobin(n);
	    cout<<endl;
	}
	return 0;
}
