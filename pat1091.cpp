#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
int m;
cin>>m;
for(int i=0;i<m;i++)
{
  int s;
  cin>>s;
  for(int j=1;j<10;j++)
  {
    int t=s*s*j;
    string x=to_string(t);
    string y=to_string(s);
    if(y==x.substr(x.size()-y.size()))
    {cout<<j<<" "<<t<<endl; break;}
    if(j==9) cout<<"No"<<endl;
  }
}
return 0;
}