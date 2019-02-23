#include <bits/stdc++.h>
using namespace std;
int main(){
	string code;
	int c;
	cin>>code>>c;
	int count=0;
	string str;
	
	getchar();
	while(1)
{
  getline(cin,str);
	if(str=="#") break;
	count++;
	if(str==code)
	{cout<<"Welcome in";	break;}
	if(str!=code)
	{
	cout<<"Wrong password: "<<str<<endl;
	if(count==c)
	{cout<<"Account locked"<<endl; break;}
	}
}
	return 0;
}