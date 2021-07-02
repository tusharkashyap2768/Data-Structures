#include<bits/stdc++.h>
using namespace std;
void swap(int*x,int*y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void bubblesort(int a[],int n)
{
	int i,j,flag=0;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
			swap(&a[j],&a[j+1]);
			flag=1;
		}
		if(flag==0)
     break;

	}
	
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bubblesort(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

}
