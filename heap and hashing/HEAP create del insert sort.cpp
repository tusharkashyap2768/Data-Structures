#include<bits/stdc++.h>
using namespace std;
void insert(int a[],int n)
{
 int i=n,temp;
  temp=a[i];
  while(i>1 && temp>a[i/2])
  {
    a[i]=a[i]/2;
    i=i/2;
  }
  a[i]=temp;
}

int main()
{
  a=[0,10,20,30,35,5,40,35];
  int i;
  for(i=2;i<7;i++)
    insert(a,i);
  for(i=1;i<=7;i++)
    cout<<a[i]<<" ";
}

