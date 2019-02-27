#include<bits/stdc++.h>
using namespace std;
int main()
{
string x;
cin>>x;
string s1;
getchar();
getline(cin,s1);
int count;
if(x[0]=='C')
{
   for(int i=0;i<s1.size();i++)
 {
   if(s1[i]==s1[i+1])
   {
   	count=2;
      while(s1[i+1]==s1[i+2])
	{
		i++;
		count++;
	   }   
    cout<<count<<s1[i];
    i++;
   }
   else
   cout<<s1[i];
 }
}
else
{
	 for(int i=0;i<s1.size();i++)
	{
		if((s1[i]-'0')<10&&(s1[i]-'0')>=0)
		{
			count=1;
			while((s1[i+1]-'0')<10&&(s1[i+1]-'0')>=0)
			{
				i++; 
				count++;
			}
		int x=stoi(s1.substr(i-count+1,count));
		for(int j=0;j<x;j++)
		cout<<s1[i+1];
		i++; 
		}
		else
		cout<<s1[i];
	}
 } 
return 0;
}
