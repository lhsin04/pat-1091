#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,n,a,b,x;
	cin>>m>>n>>a>>b>>x;
	int s[m][n];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	{
		cin>>s[i][j];
		if(s[i][j]<=b&&s[i][j]>=a)  s[i][j]=x;
	 } 
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	{   if(s[i][j]>=100)
		cout<<s[i][j];
		else if(s[i][j]>=10&&s[i][j]<100)
		cout<<"0"<<s[i][j];
	    else 
	    cout<<"00"<<s[i][j];
	    
	    if(j!=n-1)   
	    cout<<" ";
	    if(j==n-1)
	    cout<<endl;
}
	return 0;
}
