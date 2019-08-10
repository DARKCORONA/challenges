#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int tc;
 cin>>tc;
 while(tc--)
 {
  int n;
  int cnt=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
   cin>>arr[i];      
  }
  for(int i=0;i<n;i++)
  {
   int xorval=0;
   for(int j=i;j<n;j++)
   {
    xorval^=arr[j];
    if(xorval && (!(xorval&(xorval-1))))
    {
     cnt++;    
    }
   }
  }
  cout<<cnt<<endl;
 }
 return 0;
}
