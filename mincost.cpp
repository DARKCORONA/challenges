#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int tc;
 cin>>tc;
 while(tc--)
 {
  int m,k;
  cin>>m>>k;
  int cost[m];
  int min=1000;//Variate it according to range/set to INT_MAX
  for(int i=0;i<m;i++)
  {
   cin>>cost[i];
   if(min>cost[i])
      min=cost[i];
  }
  int mcp=min+k;
  
  int tcost=0;
  for(int i=0;i<m;i++)
  { 
   if(cost[i]<mcp)
      tcost+=cost[i];
   else if(cost[i]==min)
      tcost+=min;
   else       
      tcost+=mcp;
  }
  cout<<tcost<<endl;
 }
 return 0;
}
