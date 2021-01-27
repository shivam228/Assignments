#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool fun(int arr[],int n,int par,int mid)
{
	int paratha =0;
	int time =0;
	for(int i=0;i<n;i++)
	{
		int j=2;
		time  = arr[i];
		while(time<=mid)
		{
			paratha++;
			time = time + (arr[i]*j);
			j++;
		}
		if(paratha>=par)
			return true;
		else
			return false;
	}
}

int main()
{
	int m;
	cin>>m;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int low = 0;
	int high = 100000000;
	int ans;
	while(low<=high)
	{
		int mid =(low + high)/2;
		if(fun(arr,n,m,mid))
		{
			ans = mid;
			high = mid-1;
		}
		else
			low = mid+1;
	}
	cout<<ans;

	return 0;
}