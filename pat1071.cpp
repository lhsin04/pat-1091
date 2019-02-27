#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,k;
  cin>>t>>k;
  int n1,b,s,n2;
  for(int i=0;i<k;i++)
  {
    cin>>n1>>b>>s>>n2;
    if(t<s)    {cout<<"Not enough tokens.  Total = "<<t<<"."<<endl;continue;}
    if(b==0)
    {
      if(n1>n2)  {t=t+s;cout<<"Win "<<s<<"! Total ="<<t<<"."<<endl;}
      else {t=t-s; 
                   cout<<"Lose "<<s<<". Total = "<<t<<"."<<endl;
        if(t<=0) {cout<<"Game Over."; break;} 
      }
    }
    if(b==1)
    {
      if(n1<n2)  {t=t+s;cout<<"Win "<<s<<"! Total ="<<t<<"."<<endl;}
      else {t=t-s;  
                   cout<<"Lose "<<s<<". Total = "<<t<<"."<<endl;
       if(t<=0) {cout<<"Game Over."; break;} 
      }
    }
    
    
    
  }

return 0;
}
 
