#include<bits/stdc++.h>
using namespace std;
// void swap(int*x,int*y)
// {
// 	int temp=*x;
// 	*x=*y;
// 	*y=temp;
// }

void insertion(int a[],int n)
{
	int i,j,x;
	for(i=1;i<n;i++)
	{
		j=i-1;
		x=a[i];
		while (j>-1 && a[j]>x)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
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
	insertion(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

}
