#include<bits/stdc++.h>
using namespace std;
int main()
{
int n; 
cin>>n;
string id;
int x,y;
int s[10020];
int ts1=0,ts2=0;
string first,last;
cin>>id>>x>>y;
s[0]=abs(x)+abs(y);
first=last=id;
ts1=ts2=s[0];
for(int i=1;i<n;i++)
{
	cin>>id>>x>>y;
	s[i]=abs(x)+abs(y);
	if(s[i]>=ts2)  {ts2=s[i];  last=id;}
	if(s[i]<=ts1)  {ts1=s[i];  first=id;} 
 } 
 cout<<first<<" "<<last;
return 0;
}
