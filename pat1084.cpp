#include <bits/stdc++.h>
using namespace std;
int main() {
  string a[50];
  int m,d;
  cin>>d>>m;
  a[0]=to_string(d);
  string str1,str2;
  for(int i=0;i<m-1;i++)
  {
    int count=1;
    for(int j=1;j<=a[i].size();j++)
    {
      
	  
      if(a[i][j-1]==a[i][j])
      {count++;}
      else
      {string str1=to_string(a[i][j-1]-48);
      string str2=to_string(count);
      a[i+1]=a[i+1]+str1+str2;
      count=1;}
    }
  }
   cout<<str1<<" "<<str2<<endl;
   cout<<a[m-1]<<endl;
   return 0;
}
