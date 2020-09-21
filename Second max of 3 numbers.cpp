#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
cin>>t;

while(t--)
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    vector<int> arr{n1,n2,n3} ;
    sort(arr.begin(), arr.end());
    cout<<arr[1]<<endl;
}
}
